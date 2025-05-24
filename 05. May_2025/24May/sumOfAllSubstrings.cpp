class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        int res {0};
        int n = s.size(), p {0};
        for (int i{0}; i< n; i++){
            int temp = s[i] -'0';
            p = p * 10 + temp * (i+1);
            res += p;
        }
        return res;
    }
};