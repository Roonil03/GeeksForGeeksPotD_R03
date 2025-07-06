class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        // code here
        int n = a.size();
        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end(), greater<int>());
        vector<int>res;
        set<pair<int, int>> vis;
        priority_queue<pair<int, pair<int, int>>> pq;
        pq.push({a[0] + b[0] ,{0, 0}});
        vis.insert({0, 0});
        // while(k-- && !pq.empty()){
        //     auto cur = pq.top();
        //     pq.pop();
        //     int sum = cur.first;
        //     int i = cur.second.first, j = cur.second.second;
        //     res.push_back(sum);
        //     if(i + 1 < n && !vis.count({i + 1, j})){
        //         pq.push({a[i + 1] + b[j], {i+1, j}});
        //         vis.insert({i, j+1});
        //     }
        //     if(j + 1 < n && !vis.count({i, j + 1})){
        //         pq.push({a[i] + b[j + 1], {i, j + 1}});
        //         vis.insert({i, j + 1});
        //     }
        // }
        while(res.size()<k)
        {
            int val=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            res.push_back(val);
            if(y+1<n)
            {
                if(vis.find({x,y+1})==vis.end())
                {
                    vis.insert({x,y+1});
                    pq.push({a[x]+b[y+1],{x,y+1}});
                }
            }
            if(x+1<n)
            {
                if(vis.find({x+1,y})==vis.end())
                {
                    vis.insert({x+1,y});
                    pq.push({a[x+1]+b[y],{x+1,y}});
                }
            }
        }
        return res;
    }
};