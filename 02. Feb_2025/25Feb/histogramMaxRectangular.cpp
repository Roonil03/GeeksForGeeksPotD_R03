class Solution {
    public:
      int getMaxArea(vector<int> &arr) {
          // Your code here
          int n = arr.size();
          stack<int> s;
          int res = 0;
          for (int i = 0; i <= n; i++) {
              int x = (i == n) ? 0 : arr[i];
              while (!s.empty() && x < arr[s.top()]) {
                  int h = arr[s.top()];
                  s.pop();
                  int w = s.empty() ? i : i - s.top() - 1;
                  res = max(res, h * w);
              }
              s.push(i);
          }
          return res;
      }
  };