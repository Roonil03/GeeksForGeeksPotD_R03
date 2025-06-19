class Solution {
  public:
    string caseSort(string& s) {
        // code here
        vector<char>l, u;
        for(char c : s){
            if (islower(c)){
                l.push_back(c);
            } else{
                u.push_back(c);
            }
        }
        sort(l.begin(), l.end());
        sort(u.begin(), u.end());
        string res = s;
        int li {0}, ui {0};
        for(int i{0}; i < s.size(); i++){
            if(islower(s[i])){
                res[i] = l[li++];
            } else{
                res[i] = u[ui++];
            }
        }
        return res;
    }
};