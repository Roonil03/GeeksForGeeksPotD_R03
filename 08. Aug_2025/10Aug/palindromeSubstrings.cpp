class Solution {
  public:
    int countPS(string &s) {
        // code here
        int n = s.size();
        int res {0};
        for(int i {0}; i < n; i++){
            int l = i - 1, r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                res++;
                l--;
                r++;
            }
        }
        for(int i{0}; i < n - 1; i++){
            int l = i, r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                res++;
                l--;
                r++;
            }
        }
        return res;
    }
};