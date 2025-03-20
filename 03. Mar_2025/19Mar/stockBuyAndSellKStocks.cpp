class Solution {
    public:
      int maxProfit(vector<int>& prices, int k) {
          // code here
          int n = prices.size();
          if (k >= n / 2) {
              int b = 0;
              for (int i = 1; i < n; ++i) {
                  if (prices[i] > prices[i - 1]) {
                      b += prices[i] - prices[i - 1];
                  }
              }
              return b;
          }
          vector<vector<int>> a(k + 1, vector<int>(n, 0));
          for (int i = 1; i <= k; ++i) {
              int b = -prices[0];
              for (int j = 1; j < n; ++j) {
                  a[i][j] = max(a[i][j - 1], prices[j] + b);
                  b = max(b, a[i - 1][j] - prices[j]);
              }
          }
          return a[k][n - 1];
      }
  };