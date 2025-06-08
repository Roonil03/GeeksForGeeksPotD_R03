class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here.
        int n = a1.size();
        vector<int>diff(n);
        for(int i{0}; i<n; i++){
            diff[i] = a1[i] - a2[i];
        }
        unordered_map<int, int> t;
        int res {0}, sum {0};
        t[0] = -1;
        for(int i{0}; i <n;i++){
            sum += diff[i];
            if(t.find(sum) != t.end()){
                res = max(res, i - t[sum]);
            } else{
                t[sum] = i;
            }
        }
        return res;
    }
};