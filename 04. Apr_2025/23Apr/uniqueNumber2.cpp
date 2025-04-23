class Solution {
    public:
      vector<int> singleNum(vector<int>& arr) {
          // Code here.
          int x {0};
          for (int n : arr){
              x ^= n;
          }
          int r  = x& -x;
          int n1 {0}, n2 {0};
          for(int n : arr){
              if (n & r){
                  n1 ^= n;
              } else{
                  n2 ^= n;
              }
          }
          if (n1 > n2){
              swap(n1, n2);
          }
          return {n1, n2};
      }
  };