class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int c1 = -1, c2 = -1, v1 = 0, v2 = 0;
        for (int num : arr) {
            if (num == c1){
                ++v1;
            } else if (num == c2){
                ++v2;
            } else if (v1 == 0){
                c1 = num;
                ++v1;
            } else if (v2 == 0) {
                c2 = num;
                ++v2;
            } else {
                --v1;
                --v2;
            }
        }
        int cnt1 = 0, cnt2 = 0;
        for (int num : arr) {
            if (num == c1){
                ++cnt1;
            }
            if (num == c2){
                ++cnt2;
            }
        }
        vector<int> res;
        if (cnt1 > n / 3){
            res.push_back(c1);
        }
        if (cnt2 > n / 3 && c2 != c1){
            res.push_back(c2);
        }
        sort(res.begin(), res.end());
        return res;
    }
};