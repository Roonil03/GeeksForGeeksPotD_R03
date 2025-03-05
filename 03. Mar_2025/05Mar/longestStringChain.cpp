class Solution {
    public:
      int longestStringChain(vector<string>& words) {
          // Code here
          unordered_map<string, int> dp;
          sort(words.begin(), words.end(), [](const string &a, const string &b) {
              return a.size() < b.size();
          });
          int res = 1;
          for (const string& word : words) {
              int a = 1;
              for (int i = 0; i < word.size(); ++i) {
                  string b = word.substr(0, i) + word.substr(i + 1);
                  if (dp.find(b) != dp.end()) {
                      a = max(a, dp[b] + 1);
                  }
              }
              dp[word] = a;
              res = max(res, a);
          }
          return res;
      }
  };