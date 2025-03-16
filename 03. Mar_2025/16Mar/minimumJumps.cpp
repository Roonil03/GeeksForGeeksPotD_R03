class Solution {
    public:
      int minJumps(vector<int>& arr) {
          // code here
          // int n {arr.size()};
          // if (n <=1){
          //     return 0;
          // }
          // if (arr[0] == 0){
          //     return -1;
          // }
          // int a {arr[0]};
          // int b {arr[0]};
          // int res {0};
          // for (int i =0; i < n; i++){
          //     if (i == n - 1){
          //         return res;
          //     }
          //     a = max(a, i+arr[i]);
          //     b--;
          //     if (a <= i){
          //         return -1;
          //     }
          //     if (b == 0) {
          //         res++;
          //         if (i >= a){
          //             return -1;
          //         }
          //         b = a - i;
          //     }
          // }
          // return -1;
           int n=arr.size();
          if(arr[0]==0) return -1;
          
          int fuel=arr[0], jump=1, maxi=arr[0];
          
          for(int i=1; i<n; i++){
              if (i == n - 1) return jump;
              fuel--;
              maxi=max(maxi, i+arr[i]);
              if(fuel==0){
                  if(maxi<=i) return -1;
                  else{
                      fuel=maxi-i;
                      jump++;
                  }
              }
          }
          return jump;
      }
  };