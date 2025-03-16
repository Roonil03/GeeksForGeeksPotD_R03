class Solution {
    public:
      int count(vector<int>& coins, int sum) {
          // code here.
          vector<long long> dp(sum + 1, 0);
          dp[0] = 1;
          for(int coin : coins) {
              for(int amount = coin; amount <= sum; amount++) {
                  dp[amount] = (dp[amount] + dp[amount - coin]);
              }
          }
          return dp[sum];
      }
  };