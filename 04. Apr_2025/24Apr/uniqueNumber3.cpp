class Solution {
    public:
      int getSingle(vector<int> &arr) {
          // code here
          int a {0}, b{0};
          for (int i : arr){
              a = (a ^ i) & ~b;
              b = (b ^ i) & ~a;
          }
          return a;
      }
  };