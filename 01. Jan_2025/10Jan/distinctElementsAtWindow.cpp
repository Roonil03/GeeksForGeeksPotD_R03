class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for (int i = 0; i < k; i++) {
            mpp[arr[i]]++;
        }
        ans.push_back(mpp.size());
        for (int i = k; i < arr.size(); i++) {
            int elem = arr[i - k];
            mpp[elem]--;
            if (mpp[elem] == 0) {
                mpp.erase(elem);
            }
            mpp[arr[i]]++;
            ans.push_back(mpp.size());
        }
        return ans;
    }
};