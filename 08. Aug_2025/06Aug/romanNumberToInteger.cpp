class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int n = s.size();
        int res {0};
        for (int i {0}; i < n; i++){
            int val = roman[s[i]];
            if(i + 1 < n && roman[s[i + 1]] > val){
                res -= val;
            } else{
                res += val;
            }
        }
        return res;
    }
};