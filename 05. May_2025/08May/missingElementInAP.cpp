class Solution {
    public:
      int findMissing(vector<int> &arr) {
          // code here
          // int res {0};
          // int n = arr.size();
          // int dif = (arr[n - 1] - arr[0]) / n;
          // int l {0}, r = n - 1;
          // while (l < r){
          //     int m = l + (r - l) / 2;
          //     if(arr[m] != arr[0] + m * dif){
          //         r = m;
          //     } else{
          //         l = m + 1;
          //     }
          // }
          // if (l == n - 1) {
          //     return arr[n - 1] + arr[1] - arr[0];
          // }
          // return arr[0] + l * dif;
          int n = arr.size();
          int d1 = arr[1]-arr[0];
          int d2 = arr[n-1]-arr[n-2];
          int d;
          if(d1==d2 || d1<d2){
              d = d1;
          }
          else{
              d = d2;
          }
          
          int i=1;
          while(i<=n){
              if(arr[i-1]+d == arr[i]){
                  i++;
              }
              else{
                  return arr[i-1]+d;
              }
          }
          return -1;
      }
  };