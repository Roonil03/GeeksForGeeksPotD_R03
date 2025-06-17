class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<long long>pre(n + 1, 0);
        for(int i{0}; i < n; i++){
            pre[i+1] = pre[i] + arr[i];
        }
        long long res{1e18};
        vector<int>can;
        can.push_back(0);
        for(int i{0}; i < n;i++){
            if (can.empty() || can.back() != arr[i]){
                can.push_back(arr[i]);
            }
        }
        for(int l : can){
            int lid = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
            long long cd = pre[lid];
            int h = l + k;
            int hid = upper_bound(arr.begin(), arr.end(), h) - arr.begin();
            long long sum = pre[n] - pre[hid];
            long long cr = sum - (long long)(n - hid) * h;
            long long tc = cd + cr;
            res = min(res, tc);
        }
        return res;
    }
};
