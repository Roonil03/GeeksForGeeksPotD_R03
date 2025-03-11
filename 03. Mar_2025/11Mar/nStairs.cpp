class Solution {
    public:
      int countWays(int n) {
          // your code here
          if (n <= 1){
              return 1;
          }
          int prev{1}, c{1};
          for(int i{2}; i <= n; i++) {
              int temp{c};
              c = prev + c;
              prev = temp;
          }
          return c;
      }
  };