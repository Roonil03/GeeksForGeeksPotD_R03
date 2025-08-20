class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int l {0}, r = n * m - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int a = mat[mid / m][mid % m];
            if(a == x){
                return true;
            }
            int b = mat[l / m][l % m];
            if(b <= a){
                if(b <= x && x < a){
                    r = mid - 1;
                } else{
                    l = mid + 1;
                }
            } else{
                int c = mat[r / m][r % m];
                if(a < x && x <= c){
                    l = mid + 1;
                } else{
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};
