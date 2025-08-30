class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int l {0}, r = n - 1;
        while(l < r){
            if(mat[l][r] == 1){
                l++;
            } else{
                r--;
            }
        }
        int can = l;
        for(int i {0}; i < n; i++){
            if(i != can){
                if(mat[can][i] == 1 || mat[i][can] == 0){
                    return -1;
                }
            }
        }
        return can;
    }
};