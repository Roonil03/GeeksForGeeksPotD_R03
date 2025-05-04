class Solution {
    public:
      int findSubString(string& str) {
          // code here
          int n = str.size();
          if (n == 0){
              return 0;
          }
          unordered_map<char, int> m;
          for (char ch : str){
              m[ch]++;
          }
          int dist = m.size();
          int s {0}, res {INT_MAX}, count {0};
          unordered_map<char, int> win;
          for (int e {0}; e < n; e++){
              char cc = str[e];
              win[cc]++;
              if (win[cc] == 1){
                  count++;
              }
              while (count == dist) {
                  res = min(res, e - s + 1);
                  char leftChar = str[s];
                  win[leftChar]--;
                  if (win[leftChar] == 0) {
                      count--;
                  }
                  s++;
              }
          }
          return res;
      }
  };