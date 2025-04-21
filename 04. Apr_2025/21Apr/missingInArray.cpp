class Solution {
    public:
      int missingNum(vector<int>& arr) {
          // code here
          int res {0};
          int n = ((arr.size() + 1) * (arr.size() + 2)) / 2;
          for(int i : arr){
              res += i;
          }
          return n - res;
      }
  };