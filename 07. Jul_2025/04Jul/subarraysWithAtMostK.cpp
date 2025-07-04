class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int>freq;
        int l{0}, res {0}, dist {0};
        for(int r {0}; r < n; r++){
            if (freq[arr[r]] == 0){
                dist++;
            }
            freq[arr[r]]++;
            while(dist > k){
                freq[arr[l]]--;
                if(freq[arr[l]] == 0){
                    dist--;
                }
                l++;
            }
            res += r - l + 1;
        }
        return res;
    }
};