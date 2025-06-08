class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here.
        vector<int> res;
        if (pat.empty() || txt.empty() || pat.length() > txt.length()) {
            return res;
        }
        vector<int> lps(pat.length(), 0);
        int len{0};
        int i {1};
        while (i < pat.length()) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        i = 0; 
        int j {0}; 
        while (i < txt.length()) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            }
            if (j == pat.length()) {
                res.push_back(i - j + 1);
                j = lps[j - 1];
            } else if (i < txt.length() && pat[j] != txt[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
    return res;
    }
};