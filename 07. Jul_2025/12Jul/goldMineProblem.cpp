class Solution {
  public:
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<long long>>dp(n, vector<long long>(m, 0));
        for(int i{0}; i < n;i++){
            dp[i][m-1] = mat[i][m-1];
        }
        for(int j = m - 2; j >= 0; j--){
            for(int  i{0}; i < n; i++){
                long long r = dp[i][j+1];
                long long a = (i - 1 >= 0) ? dp[i-1][j+1] : 0;
                long long b = (i + 1 < n) ? dp[i+1][j+1] : 0;
                dp[i][j] = mat[i][j] + max({r, a, b});
            }
        }
        int res {0};
        for (int i{0}; i < n; i++){
            res = max(res, (int)dp[i][0]);
        }
        return res;
    }
};