class Solution {
    public:
      int minCost(vector<vector<int>>& houses) {
          // code here
          int n = houses.size();
          vector<vector<pair<int, int>>> g(n);
          for(int i {0}; i < n; i++){
              for(int j = i+1; j < n; j++){
                  int cost = abs(houses[i][0] - houses[j][0]) + abs(houses[i][1] - houses[j][1]);
                  g[i].push_back({j, cost});
                  g[j].push_back({i, cost});
              }
          }
          vector<int> manDist(n, INT_MAX);
          vector<bool> vis(n, false);
          manDist[0] = 0;
          int res = 0;
          for(int i {0}; i< n; i++){
              int u {-1};
              for(int j {0}; j < n; j++){
                  if(!vis[j] && (u == -1 || manDist[j] < manDist[u])){
                      u = j;
                  }
              }
              vis[u] = true;
              res += manDist[u];
              for(auto& edge: g[u]){
                  int v = edge.first;
                  int cost = edge.second;
                  if(!vis[v] && cost < manDist[v]){
                      manDist[v] = cost;
                  }
              }
          }
          return res;
      }
  };