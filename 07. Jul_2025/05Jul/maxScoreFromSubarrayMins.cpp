class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        int res {INT_MIN};
        for(int i{0}; i < n - 1; i++){
            res = max(res, arr[i]+arr[i+1]);
        }
        return res;
    }
};