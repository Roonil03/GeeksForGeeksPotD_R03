class Solution {
  public:
    vector<string> generateBinary(int n) {
        // code here
        vector<string> res;
        for(int i {1};i <= n; i++){
            res.push_back(h1(i));
        }
        return res;
    }
    
    string h1(int n){
        string res = "";
        // int s, cnt {0};
        while(n > 0){
            int b = n % 2;
            res.push_back('0'+ b);
            n>>=1;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};