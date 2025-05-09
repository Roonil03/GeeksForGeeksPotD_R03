class Solution {
    public:
      int countWays(string &s) {
          // Code here
          if (s[0] == '0'){
              return 0;
          }
          int n {s.length()};
          vector<int> dp(n+1,0);
          dp[0] = 1;
          dp[1] = 1;
          for(int i = 2; i <= n; i++){
              if(s[i-1] != '0'){
                  dp[i] += dp[i-1];
              }
              int a {stoi(s.substr(i-2, 2))};
              if (a >= 10 && a <= 26){
                  dp[i] += dp[i-2];
              }
          }
          return dp[n];
      }
  };