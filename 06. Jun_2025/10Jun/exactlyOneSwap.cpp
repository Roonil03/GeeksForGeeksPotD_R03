class Solution {
  public:
    int countStrings(string &s) {
        // code here
        // unordered_set<string>dist;
        // int n = s.length();
        // for(int i {0}; i < n-1; i++){
        //     for(int j {i+1}; j < n; j++){
        //         if(s[i] != s[j]){
        //             string sw = s;
        //             swap(sw[i], sw[j]);
        //             dist.insert(sw);
        //         }
        //     }
        // }
        // return dist.size();
        vector<int> map(26, 0);  
        int res = 0;
        bool cd = false;
        for(int i = 0; i < s.length(); i++) {
            res += (i - map[s[i] - 'a']);
            map[s[i] - 'a']++;
            if(map[s[i] - 'a'] > 1) {
                cd = true;
            }
        }
        return cd ? res + 1 : res;
    }
};
