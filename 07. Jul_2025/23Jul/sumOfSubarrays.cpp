class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int res {0};
        int n = arr.size();
        for (int i {0}; i < n; i++) {
            res += arr[i] * (i + 1) * (n - i);
        }
        return res;
    }
};