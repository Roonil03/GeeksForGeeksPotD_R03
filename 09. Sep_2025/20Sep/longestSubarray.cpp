class Solution {
  public:
    int longestSubarray(vector<int>& arr) {
        // code here
        int n = arr.size();
        // int res {0};
        // int l {0};
        // for(int r{0}; r < n; r++){
        //     while(l <= r && arr[r] > (r - l + 1)){
        //         l++;
        //     }
        //     res = max(res, r - l + 1);
        // }
        // return res;
        return h1(0, n-1, arr);
    }
    
    int h1(int a, int b, vector<int>& arr){
        // int res {0};
        for(int i = a; i <= b; i++){
            if(arr[i] > b - a + 1){
                return max(h1(a, i - 1, arr), h1(i + 1, b, arr));
            }
        }
        return b - a + 1;
    }
};