class Solution {
  public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int n = heights.size();
        vector<pair<int, int>>tow;
        long long a {0};
        for(int i {0}; i < n; i++){
            tow.push_back({heights[i],cost[i]});
            a += cost[i];
        }
        sort(tow.begin(), tow.end());
        long long b {0};
        int m = tow[0].first;
        for(int i{0}; i < n;i++){
            b += tow[i].second; 
            if(b * 2 >= a){
                m = tow[i].first;
                break;
            }
        }
        int res{0};
        for(int i {0}; i < n;i++){
            res += static_cast<int>(cost[i]) * abs(heights[i] - m);
        }
        return res;
    }
};
