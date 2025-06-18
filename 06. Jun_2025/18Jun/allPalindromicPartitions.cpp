class Solution {
  public:
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<vector<string>> res;
        vector<string> a;
        bt(s, 0, a, res);
        return res;
    }
    
    void bt(string& s, int st, vector<string>& a, vector<vector<string>>& res){
        if(st == s.size()){
            res.push_back(a);
            return;
        }
        for(int i = st; i < s.size(); i++){
            if(palin(s, st, i)){
                a.push_back(s.substr(st, i - st + 1));
                bt(s, i + 1, a, res);
                a.pop_back();
            }
        }
    }
    
    bool palin(string& s, int l, int r){
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};