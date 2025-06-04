class Solution {
  public:
    int countSubstr(string& s, int k) {
        // code here.
        return help(s, k) - help(s, k-1);
    }
    
    int help(string& s, int k){
        if (k < 0){
            return 0;
        }
        unordered_map<char, int> c;
        int res = 0;
        int left = 0;
        for (int r = 0; r < s.length(); r++) {
            c[s[r]]++;
            while (c.size() > k) {
                c[s[left]]--;
                if (c[s[left]] == 0) {
                    c.erase(s[left]);
                }
                left++;
            }
            res += (r - left + 1);
        }
        return res;
    }
};