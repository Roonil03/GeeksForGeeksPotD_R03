class Solution {
    public:
      string decodedString(string &s) {
          // code here
          stack<int> counts;
          stack<string> rs;
          string res = "";
          int i = 0;
          while (i < s.length()) {
              if (isdigit(s[i])) {
                  int count = 0;
                  while (isdigit(s[i])) {
                      count = count * 10 + (s[i] - '0');
                      i++;
                  }
                  counts.push(count);
              } else if (s[i] == '[') {
                  rs.push(res);
                  res = "";
                  i++;
              } else if (s[i] == ']') {
                  string temp = rs.top();
                  rs.pop();
                  int count = counts.top();
                  counts.pop();
                  for (int j = 0; j < count; j++) {
                      temp += res;
                  }
                  res = temp;
                  i++;
              } else {
                  res += s[i];
                  i++;
              }
          }
          return res;
      }
  };