class Solution {
    public:
      string longestPalindrome(string &s) {
          // code here
          int n = s.size();
          if (n == 0) return "";
          int start = 0, maxLength = 1;
          bool dp[n][n] = {false};
          for (int i = 0; i < n; ++i) {
              dp[i][i] = true;
          }
          for (int i = 0; i < n - 1; ++i) {
              if (s[i] == s[i + 1]) {
                  dp[i][i + 1] = true;
                  start = i;
                  maxLength = 2;
              }
          }
          for (int length = 3; length <= n; ++length) {
              for (int i = 0; i < n - length + 1; ++i) {
                  int j = i + length - 1;
                  if (dp[i + 1][j - 1] && s[i] == s[j]) {
                      dp[i][j] = true;
  
                      if (length > maxLength) {
                          start = i;
                          maxLength = length;
                      }
                  }
              }
          }
          return s.substr(start, maxLength);
      }
  };