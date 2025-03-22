class Solution {
    public:
      int maxValue(vector<int>& arr) {
          // your code here
         int n = arr.size();
          if (n == 2){
              return max(arr[0], arr[1]);
          }
          int value1 = rob(arr, 1, n-1);
          int value2 = rob(arr, 0, n-2);
          return max(value1, value2);
      }
      
      int rob(vector<int>& arr, int start, int end) {
          int prev2 = 0, prev1 = 0;
          for (int i = start; i <= end; i++) {
              int curr = max(prev2 + arr[i], prev1);
              prev2 = prev1;
              prev1 = curr;
          }
          return prev1;
      }
  };