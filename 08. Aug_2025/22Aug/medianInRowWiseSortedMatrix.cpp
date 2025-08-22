class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int mv1 = mat[0][0], mv2 = mat[0][m-1];
        for(int i {1}; i < n; i++){
            mv1 = min(mv1, mat[i][0]);
            mv2 = max(mv2, mat[i][m-1]);
        }
        int req = (n * m + 1) / 2;
        while(mv1 < mv2){
            int mid = mv1 + (mv2 - mv1) / 2;
            int count = h1(mat, mid);
            if(count < req){
                mv1 = mid + 1;
            } else{
                mv2 = mid;
            }
        }
        return mv1;
    }
    
    int h1(vector<vector<int>>& mat, int tar){
        int res {0};
        for(auto& row : mat){
            res += upper_bound(row.begin(), row.end(), tar) - row.begin();
        }
        return res;
    }
};
