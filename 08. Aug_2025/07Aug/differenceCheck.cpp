class Solution {
  public:
    int minDifference(vector<string> &arr) {
        // code here
        vector<int>secs;
        for(auto& t : arr){
            secs.push_back(h1(t));
        }
        sort(secs.begin(), secs.end());
        int n = secs.size();
        int res = 86400;
        for(int i {1}; i < n; i++){
            res = min(res, secs[i] - secs[i-1]);
        }
        res = min(res, 86400 + secs[0] - secs[n - 1]);
        return res;
    }
    
    int h1(string& str){
        int h = stoi(str.substr(0, 2));
        int m = stoi(str.substr(3, 2));
        int s = stoi(str.substr(6, 2));
        return h * 3600 + m * 60 + s;
    }
};
