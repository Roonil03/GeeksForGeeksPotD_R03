class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<int> diff(n+1, 0);
        int res {0}, eff {0};
        for(int i {0}; i < n; i++){
            eff += diff[i];
            int cur = (arr[i] + eff) % 2;
            if(cur == 0){
                if(i + k > n){
                    return -1;
                }
                diff[i] += 1;
                diff[i+k] -= 1;
                eff += 1;
                res++;
            }
        }
        return res;
    }
};