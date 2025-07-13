class Solution {
  public:
    int nonLisMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n, 1);
        vector<int> sum(n);
        for(int i{0}; i < n;i++){
            sum[i] = arr[i];
        }
        for(int i{1}; i < n;i++){
            for(int j{0}; j < i; j++){
                if (arr[j] < arr[i]){
                    if(dp[j] + 1 > dp[i]){
                        dp[i] = dp[j] + 1;
                        sum[i] = sum[j] + arr[i];
                    } else if(dp[j] + 1 == dp[i]){
                        sum[i] = min(sum[i], sum[j] + arr[i]);
                    }
                }
            }
        }
        int m = *max_element(dp.begin(), dp.end());
        int a = INT_MAX;
        for (int i{0}; i < n; i++){
            if(dp[i] == m){
                a = min(a, sum[i]);
            }
        }
        int tot {0};
        for (int x : arr){
            tot += x;
        }
        return tot - a;
    }
};