class Solution {
    public:
      int maxXor(vector<int> &arr) {
          // code here
          int res {0};
          int mask {0};
          for(int i {31}; i >=0; i--){
              mask |= (1 << i);
              unordered_set<int> pre;
              for(int num : arr){
                  pre.insert(num & mask);
              }
              int can = res | (1<<i);
              for(int p : pre){
                  if(pre.count(p ^ can)){
                      res = can;
                      break;
                  }
              }
          }
          return res;
      }
  };