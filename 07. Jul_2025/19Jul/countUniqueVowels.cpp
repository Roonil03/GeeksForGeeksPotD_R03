class Solution {
  public:
    int vowelCount(string& s) {
        // code here
        unordered_map<char, int>m;
        string v = "aeiou";
        for (char c : s){
            if(v.find(c) != string::npos){
                m[c]++;
            }
        }
        if(m.empty()){
            return 0;
        }
        long long temp {1};
        for(auto& p : m){
            temp *= p.second;
        }
        int a = m.size();
        return temp * fact(a);
    }
    
    int fact(int n){
        int res {1};
        for(int i {2}; i <= n;i++){
            res *= i;
        }
        return res;
    }
};