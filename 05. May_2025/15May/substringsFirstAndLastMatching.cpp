class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        int n = s.length();
        int res = n;
        vector<int> hash(26, 0);
        for(char c : s) {
            hash[c - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(hash[i] > 1) {
                int count = hash[i];
                res += (count * (count - 1)) / 2;
            }
        }
        return res;
    }
};