class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        if (k > s.size()){
            return 0;
        }
        unordered_map<char, int> freq;
        int d {0}, res {0};
        for(int i{0}; i < s.size(); i++){
            if(++freq[s[i]] == 1){
                d++;
            }
            if (i >= k){
                if(--freq[s[i-k]] == 0){
                    d--;
                }
            }
            if(i >= k-1 && d == k - 1){
                res++;
            }
        }
        return res;
    }
};