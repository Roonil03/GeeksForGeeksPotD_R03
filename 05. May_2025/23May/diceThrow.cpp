class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
        dp[0][0] = 1;
        for (int a {1}; a <= n; a++){
            for (int b {1}; b <= x; b++){
                for (int c {1}; c <= m; c++){
                    if (b - c >= 0){
                        dp[a][b] += dp[a-1][b-c];
                    }
                }
            }
        }
        return dp[n][x];
    }
};