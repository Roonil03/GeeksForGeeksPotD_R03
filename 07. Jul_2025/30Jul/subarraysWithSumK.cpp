class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> m;
        m[0] = 1;
        int sum {0};
        int res {0};
        for (int x : arr){
            sum += x;
            if(m.count(sum - k)){
                res  += m[sum - k];
            }
            m[sum]++;
        }
        return res;
    }
};