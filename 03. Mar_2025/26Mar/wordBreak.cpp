
class Solution {
    public:
      int wordBreak(string &s, vector<string> &dictionary) {
          // code here
          // unordered_set<string> dict;
          // vector<bool> dp(s.length() + 1, false);
          // dp[0] = true;
          // for(const string& word : wordDict) {
          //     dict.insert(word);
          // }
          // for(int i = 1; i <= s.length(); i++) {
          //     for(int j = 0; j < i; j++) {
          //         if(dp[j] && dict.count(s.substr(j, i-j))) {
          //             dp[i] = true;
          //             break;
          //         }
          //     }
          // }
          // return dp[s.length()];
          unordered_set<string> st(dictionary.begin(), dictionary.end());
          int l = 0;
          for (const string& word : dictionary) {
              l = max(l, (int)word.length());
          }
          int n = s.length();
          vector<bool> dp(n + 1, false);
          dp[0] = true;
          for (int j = 0; j < n; j++) {
              for (int i = j; i > max(-1, j-l); i--) {
                  dp[j+1] = dp[j+1] || (dp[i] && st.count(s.substr(i, j-i+1)));
                  if (dp[j+1]) break; 
              }
          }
          return dp[n];
      }
  };