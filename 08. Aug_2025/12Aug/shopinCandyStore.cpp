class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int n = prices.size();
        int a = (n + k) / (k + 1);
        sort(prices.begin(), prices.end());
        int r1 {0};
        for (int i {0}; i < a; i++) {
            r1 += prices[i];
        }
        sort(prices.rbegin(), prices.rend());
        int r2 {0};
        for (int i {0}; i < a; i++) {
            r2 += prices[i];
        }
        return {r1, r2};
    }
};