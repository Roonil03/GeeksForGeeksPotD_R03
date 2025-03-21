class Solution {
    public:
      int maxProfit(vector<int> &prices) {
          // code here
          int n = prices.size();
          vector<int> leftProfit(n, 0);
          vector<int> rightProfit(n, 0);
          int minPrice = prices[0];
          for (int i = 1; i < n; ++i) {
              leftProfit[i] = max(leftProfit[i-1], prices[i] - minPrice);
              minPrice = min(minPrice, prices[i]);
          }
          int maxPrice = prices[n-1];
          for (int i = n-2; i >= 0; --i) {
              rightProfit[i] = max(rightProfit[i+1], maxPrice - prices[i]);
              maxPrice = max(maxPrice, prices[i]);
          }
          int maxProfit = 0;
          for (int i = 0; i < n; ++i) {
              maxProfit = max(maxProfit, leftProfit[i] + rightProfit[i]);
          }
          return maxProfit;
      }
  };