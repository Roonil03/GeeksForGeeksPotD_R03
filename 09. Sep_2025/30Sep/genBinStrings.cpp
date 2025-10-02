class Solution {
  public:
    vector<string> binstr(int n) {
        // code here
        vector<string> res;
        string cur = {};
        h1(n, cur, res);
        return res;
    }
    
    void h1(int n, string cur, vector<string>& res){
        if(n == 1){
            string z = cur + '0';
            string o = cur + '1';
            res.push_back(z);
            res.push_back(o);
            return;
        }
        h1(n - 1, cur + '0', res);
        h1(n - 1, cur + '1', res);
        return;
    }
};