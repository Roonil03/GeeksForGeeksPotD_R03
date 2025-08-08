class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        int n = s.size();
        vector<int>lps(n, 0);
        for (int i{1}, len {0}; i< n;){
            if(s[i] == s[len]){
                lps[i++] = ++len;
            } else if(len){
                len = lps[len - 1];
            } else{
                lps[i++] = 0;
            }
        }
        return lps[n-1];
    }
};