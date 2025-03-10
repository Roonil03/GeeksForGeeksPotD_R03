class Solution {
    public:
      // Function to compute the edit distance between two strings
      int editDistance(string& s1, string& s2) {
          // code here
          array<int, 3> operations{1, 1, 1};
          int m{s1.length()};
          int n{s2.length()};
          vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
          for(int i{0}; i <= m; i++) {
              dp[i][0] = i * operations[1];
          }
          for(int j{0}; j <= n; j++) {
              dp[0][j] = j * operations[0];
          }
          for(int i{1}; i <= m; i++) {
              for(int j{1}; j <= n; j++) {
                  if(s1[i-1] == s2[j-1]) {
                      dp[i][j] = dp[i-1][j-1];
                  } else {
                      array<int, 3> choices{
                          dp[i][j-1] + operations[0],   
                          dp[i-1][j] + operations[1],    
                          dp[i-1][j-1] + operations[2]   
                      };
                      dp[i][j] = *min_element(choices.begin(), choices.end());
                  }
              }
          }
          return dp[m][n];
      }
  };