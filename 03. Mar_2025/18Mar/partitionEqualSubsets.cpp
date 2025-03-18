class Solution {
    public:
      bool equalPartition(vector<int>& arr) {
          // code here
          int totalSum = 0;
          int n = arr.size();
          for(int num : arr) {
              totalSum += num;
          }
          if(totalSum % 2 != 0) {
              return false;
          }
          int target = totalSum / 2;
          vector<bool> dp(target + 1, false);
          dp[0] = true;
          for(int num : arr) {
              for(int j = target; j >= num; j--) {
                  dp[j] = dp[j] || dp[j - num];
              }
          }
          return dp[target];
      }
  };
