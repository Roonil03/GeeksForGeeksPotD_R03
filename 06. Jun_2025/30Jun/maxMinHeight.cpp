class Solution {
  public:
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n = arr.size();
        int l = *min_element(arr.begin(), arr.end());
        int h = l + k + 1;
        auto h1 = [&](int x) -> bool{
            vector<int> wat(n + 1, 0);
            int ops {0}, add{0};
            for(int i {0}; i < n; i++){
                add += wat[i];
                int nd = x - (arr[i] + add);
                if (nd > 0){
                    ops += nd;
                    if(ops > k){
                        return false;
                    }
                    add += nd;
                    if(i + w < n){
                        wat[i + w] -= nd;
                    }
                }
            }
            return true;
        };
        int res = l;
        while ( l <= h){
            int m = l + (h - l) / 2;
            if(h1(m)){
                res = m;
                l = m + 1;
            } else{
                h = m - 1;
            }
        }
        return res;
    }
};