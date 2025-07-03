class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        if(k == 0 || n == 0){
            return -1;
        }
        unordered_map<char, int>freq;
        int l {0}, res {-1};
        for(int r {0}; r < n; r++){
            freq[s[r]]++;
            while(freq.size() > k){
                freq[s[l]]--;
                if(freq[s[l]] == 0){
                    freq.erase(s[l]);
                }
                l++;
            }
            if(freq.size() == k){
                res = max(res, r - l + 1);
            }
        }
        return res;
    }
};