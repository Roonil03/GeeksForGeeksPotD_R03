class Solution {
    public:
      int lis(vector<int>& arr) {
          // code here
          if (arr.empty()){
              return 0;
          }
          vector<int> lis;
          for (int num : arr) {
              auto it = lower_bound(lis.begin(), lis.end(), num);
              if (it != lis.end()) {
                  *it = num;
              } else {
                  lis.push_back(num);
              }
          }
          return lis.size();
      }
  };