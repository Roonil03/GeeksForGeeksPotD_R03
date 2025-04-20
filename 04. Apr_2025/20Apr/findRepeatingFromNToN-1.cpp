class Solution {
    public:
      int findDuplicate(vector<int>& arr) {
          // code here
          int res {0};
          int n = ((arr.size() - 1) * arr.size()) / 2;
          for (int i {0}; i < arr.size(); i++){
              res += arr[i];
          }
          return res - n;
      }
  };
  