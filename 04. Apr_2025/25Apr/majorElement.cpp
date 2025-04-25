class Solution {
    public:
      int majorityElement(vector<int>& arr) {
          // code here
          int res {-1}, count {0};
          for(int i : arr){
              if(count == 0){
                  res = i;
                  count = 1;
              } else if(i == res){
                  count++;
              } else{
                  count--;
              }
          }
          count = 0;
          for(int i : arr){
              if (i == res){
                  count++;
              }
          }
          if (count > arr.size()/2){
              return res;
          }
          return -1;
      }
  };