class Solution {
  public:
    string smallestWindow(string &s, string &p) {
        // code here
        unordered_map<char, int> ch;
        for(char c : p){
            ch[c]++;
        }
        int req = ch.size();
        int form {0};
        int l {0}, r {0};
        int res = INT_MAX;
        int ml {0}, mr {0};
        unordered_map<char, int> win;
        while(r < s.length()){
            char c = s[r];
            win[c]++;
            if(ch.count(c) && win[c] == ch[c]){
                form++;
            }
            while(l <= r && form == req){
                if(r - l + 1 < res){
                    res = r - l + 1;
                    ml = l;
                    mr = r;
                }
                char lc = s[l];
                win[lc]--;
                if(ch.count(lc) && win[lc] < ch[lc]){
                    form--;
                }
                l++;
            }
            r++;
        }
        return res == INT_MAX ? "" : s.substr(ml, res);
    }
};