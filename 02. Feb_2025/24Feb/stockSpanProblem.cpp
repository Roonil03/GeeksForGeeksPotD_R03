class Solution {
    public:
      vector<int> calculateSpan(vector<int>& arr) {
          // write code here
          int n = arr.size();
          vector<int> res(n);
          stack<int> s;
          s.push(0);
          res[0] = 1;
          for (int i = 1; i < n; i++) {
              while (!s.empty() && arr[s.top()] <= arr[i]) {
                  s.pop();
              }
              res[i] = (s.empty()) ? (i + 1) : (i - s.top());
              s.push(i);
          }
          return res;
      }
  };