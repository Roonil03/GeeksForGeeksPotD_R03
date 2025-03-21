class Solution {
    public:
      int findMaxSum(vector<int>& arr) {
          // code here
          int n {arr.size()};
          if (n== 1){
              return arr[0];
          }
          // int a1 {arr[0]};
          // int a2 {max(arr[0], arr[1])};
          // for(int i {2}; i < n; i++){
          //     int c = max(a1, a2+ arr[i]);
          //     a2 = a1;
          //     a1 = c;
          // }
          // return a1;
          int prev2  {0};
          int prev  {arr[0]};
          for (int i = 1; i < arr.size(); i++) {
              int take = arr[i];
              if (i > 1) take += prev2;
              int notTake = prev;
  
              int curr = max(take, notTake);
              prev2 = prev;
              prev = curr;
          }
          return prev;
      }
  };