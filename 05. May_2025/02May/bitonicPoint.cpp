class Solution {
    public:
      int findMaximum(vector<int> &arr) {
          // code here
          int res {0};
          for (int i {1}; i < arr.size(); i++){
              if (arr[i] <= arr[i-1]){
                  res = arr[i-1];
                  break;
              }
              res = arr[i];
          }
          return res;
      }
  };