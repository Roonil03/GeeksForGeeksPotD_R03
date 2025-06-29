class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        sort(b.begin(), b.end());
        vector<int> res;
        for(int x : a) {
            res.push_back(upper_bound(b.begin(), b.end(), x) - b.begin());
        }
        return res;
    }
};