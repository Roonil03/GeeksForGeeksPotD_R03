class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        unordered_map<int, int> freq;
        int l {0}, res {0};
        for(int r {0}; r < arr.size(); r++){
            freq[arr[r]]++;
            while(freq.size() > 2){
                freq[arr[l]]--;
                if(freq[arr[l]] == 0){
                    freq.erase(arr[l]);
                }
                l++;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};