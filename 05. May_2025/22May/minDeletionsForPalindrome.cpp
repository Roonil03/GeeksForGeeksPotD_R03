class Solution {
  public:
    int minDeletions(string s) {
        // code here
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for (int i {n - 1}; i >= 0; i--){
            dp[i][i] = 1;
            for (int j {i+1}; j < n; j++){
                if(s[i] == s[j]){
                    dp[i][j] = 2 + (i+1 <= j-1 ? dp[i+1][j-1] : 0);
                } else{
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
                }
            }
        }
        return n - dp[0][n-1];
    }
};