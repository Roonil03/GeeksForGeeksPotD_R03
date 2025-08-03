class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        vector<int>vals(n);
        for (int i {0}; i < n; i++){
            vals[i] = (arr[i] > k) ? 1 : -1;
        }
        unordered_map<int, int>mp;
        for (int i {0}; i < n; i++){
            vals[i] = (arr[i] > k) ? 1 : -1;
        }
        int sum {0}, res {0};
        mp[0] =-1;
        for(int i{0}; i < n; i++){
            sum += vals[i];
            if (sum > 0){
                res = i + 1;
            } else{
                if(mp.find(sum - 1) != mp.end()){
                    res = max(res, i - mp[sum - 1]);
                }
            }
            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            }
        }
        return res;
    }
};