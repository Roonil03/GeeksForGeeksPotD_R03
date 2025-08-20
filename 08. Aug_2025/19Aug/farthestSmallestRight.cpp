class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        // code here
        // int n = arr.size();
        // vector<int> res(n, -1);
        // for(int i {0}; i < n; i++){
        //     for(int j = n - 1; j > i; j--){
        //         if(arr[j] < arr[i]){
        //             res[i] = j;
        //             break;
        //         }
        //     }
        // }
        // return res;
        
        // int n = arr.size();
        // vector<int> result(n, -1);
        // vector<int> suffix_min(n);
        // suffix_min[n-1] = arr[n-1];
        // for (int i = n-2; i >= 0; i--) {
        //     suffix_min[i] = min(arr[i], suffix_min[i+1]);
        // }
        // for (int i = 0; i < n-1; i++) {
        //     int left = i + 1, right = n - 1;
        //     int farthest_pos = -1;
        //     while (left <= right) {
        //         int mid = left + (right - left) / 2;
        //         if (suffix_min[mid] < arr[i]) {
        //             farthest_pos = mid;
        //             left = mid + 1;
        //         } else {
        //             right = mid - 1;
        //         }
        //     }
        //     if (farthest_pos != -1) {
        //         for (int j = n-1; j >= farthest_pos; j--) {
        //             if (arr[j] < arr[i]) {
        //                 result[i] = j;
        //                 break;
        //             }
        //         }
        //     }
        // }
        // return result;
        
        vector<int> temp(arr.size(), 0);
         int mini=INT_MAX-1;
         for(int i=arr.size()-1 ; i>=0 ; i--){
             mini=min(mini,arr[i]);
             temp[i]=mini;
         }
         vector<int>res(arr.size(), 0);
         for(int i=0 ; i<arr.size() ; i++){
             int val=h1(arr[i],i,temp);
             res[i]=val;
         }
         return res;
        
    }
    
    int h1(int tar,int i,vector<int>&temp){
      int res=-1;
      i++;
      int j=temp.size()-1;
      while(i<=j){
          int m=i+(j-i)/2;
          if(tar>temp[m]){
              res=m;
              i=m+1;
          }
          else{
              j=m-1;
          }
      }
      return res;
  }
};