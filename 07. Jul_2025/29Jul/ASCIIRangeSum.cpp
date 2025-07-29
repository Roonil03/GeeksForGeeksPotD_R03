class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        int n = s.size();
        vector<int>a(26,-1), res, c(n+1, 0), b(26, -1);
        for(int i {0}; i < n; i++){
            if(a[s[i] - 'a'] == -1){
                a[s[i] - 'a'] = i;
            }
            b[s[i] - 'a'] = i;
            c[i+1] = c[i] + s[i];
        }
        for(int i{0}; i < 26; i++){
            if(a[i] != -1 && b[i] != -1 && b[i] > a[i]){
                int temp = c[b[i]] - c[a[i] + 1];
                if (temp != 0){
                    res.push_back(temp);
                }
            }
        }
        return res;
    }
};