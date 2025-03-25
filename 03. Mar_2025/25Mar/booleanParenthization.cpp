// User function Template for C++
class Solution {
    public:
      int countWays(string &s) {
          // code here
          int n = s.length();
          vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2, -1)));
          return solve(s, 0, n-1, 1, dp);
      }
    private:
      int solve(string &s, int a, int b, int c, vector<vector<vector<int>>>& dp) {
          if(a == b) {
              if(c == 1) return s[a] == 'T';
              return s[a] == 'F';
          }
          if(dp[a][b][c] != -1) return dp[a][b][c];
          int ways = 0;
          for(int i = a+1; i < b; i += 2) {
              int lt = solve(s, a, i-1, 1, dp);
              int lf = solve(s, a, i-1, 0, dp);
              int rt = solve(s, i+1, b, 1, dp);
              int rf = solve(s, i+1, b, 0, dp);
              if(s[i] == '&') {
                  if(c == 1) ways += lt * rt;
                  else ways += lt * rf + lf * rt + lf * rf;
              }
              else if(s[i] == '|') {
                  if(c == 1) ways += lt * rt + lt * rf + lf * rt;
                  else ways += lf * rf;
              }
              else {
                  if(c == 1) ways += lt * rf + lf * rt;
                  else ways += lt * rt + lf * rf;
              }
          }
          return dp[a][b][c] = ways;
      }
  };