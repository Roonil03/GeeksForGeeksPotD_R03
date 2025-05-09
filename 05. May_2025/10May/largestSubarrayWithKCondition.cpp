class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        int diff {0};
        unordered_map<int, int> m;
        int res {0};
        for (int i {0}; i < n; i++){
            if(arr[i] > k){
                diff++;
            } else{
                diff--;
            }
            if (diff > 0){
                res = i + 1;
            }
            if (m.find(diff) == m.end()){
                m[diff] = i;
            }
            if (m.find(diff - 1) != m.end()){
                res = max(res, i - m[diff-1]);
            }
        }
        return res;
    }
};