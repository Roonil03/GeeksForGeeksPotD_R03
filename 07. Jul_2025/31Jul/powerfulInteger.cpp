class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        // code here
        map<int, int> e;
        for (auto& i : intervals){
            int l = i[0], r = i[1];
            e[l] += 1;
            e[r+ 1] -= 1;
        }
        int cur {0}, lp {-1}, res {-1};
        for (auto i = e.begin(); i != e.end(); i++){
            int pos = i->first;
            if(lp != -1 && cur >= k){
                res = max(res, pos - 1);
            }
            cur += i->second;
            lp = pos;
        }
        return res;
    }
};