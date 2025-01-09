class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        map<int,int> mpp;
        int n = arr.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            if(mpp.find(target-arr[i]) != mpp.end()){
                ans += mpp[target-arr[i]];
            }
             mpp[arr[i]]++;
        }
        return ans;
    }
};