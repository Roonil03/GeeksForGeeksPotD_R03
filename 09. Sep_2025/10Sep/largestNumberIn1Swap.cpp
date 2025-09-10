class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int n = s.size();
        if (n < 2){
            return s;
        }
        int a = 10;
        vector<int> last(a, -1);
        for(int i {0}; i < n; i++){
            last[s[i] - '0'] = i;
        }
        for(int i{0}; i < n; i++){
            int ci = s[i] - '0';
            for(int ch = a - 1;ch > ci; ch--){
                // swap(s[i], s[last[ch]]);
                // return s;
                if (last[ch] > i) {
                    swap(s[i], s[last[ch]]);
                    return s;
                }
            }
        }
        return s;
    }
};