class Solution {
    public:
      int countPS(string &s) {
          // code here
      //     int n = s.size();
      //     int res = 0;
      //     for (int i = 0; i < n; i++){
      //         res += help(s, i, i);
      //         res += help(s, i, i+1);
      //     }
      //     return res;
      // }
      // int help(string &s, int l, int r){
      //     int a = 0;
      //     int n = s.size();
      //     while(l >= 0 && r < n && s[l] == s[r]){
      //         if (r - l + 1 >= 2){
      //             a++;
      //         }
      //         l--;
      //         r++;
      //     }
      //     return a;
          int n = s.size();
          vector<vector<bool>> dp(n, vector<bool>(n, false));
          int count = 0;
          for (int i = 0; i < n; ++i) {
              dp[i][i] = true;
          }
          for (int i = 0; i < n - 1; ++i) {
              if (s[i] == s[i + 1]) {
                  dp[i][i + 1] = true;
                  count++;
              }
          }
          for (int length = 3; length <= n; ++length) {
              for (int i = 0; i < n - length + 1; ++i) {
                  int j = i + length - 1;
                  if (dp[i + 1][j - 1] && s[i] == s[j]) {
                      dp[i][j] = true;
                      count++;
                  }
              }
          }
          return count;
      }
  };