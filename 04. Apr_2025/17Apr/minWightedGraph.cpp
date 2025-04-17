class Solution {
    public:
      int findMinCycle(int V, vector<vector<int>>& edges) {
          // code here
          // vector<vector<int>> dist(V, vector<int>(V, INT_MAX));
          // for (int i = 0; i < V; i++) {
          //     dist[i][i] = 0;
          // }
          // for (auto& edge : edges) {
          //     int u = edge[0], v = edge[1], w = edge[2];
          //     dist[u][v] = w;
          //     dist[v][u] = w;
          // }
          // int minCycle = INT_MAX;
          // for (int k = 0; k < V; k++) {
          //     for (auto& edge : edges) {
          //         int u = edge[0], v = edge[1], w = edge[2];
          //         if (dist[u][k] != INT_MAX && dist[k][v] != INT_MAX) {
          //             minCycle = min(minCycle, dist[u][k] + dist[k][v] + w);
          //         }
          //     }
          //     for (int i = 0; i < V; i++) {
          //         for (int j = 0; j < V; j++) {
          //             if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
          //                 dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
          //             }
          //         }
          //     }
          // }
          // return minCycle == INT_MAX ? -1 : minCycle;
          vector<vector<int>>adj[V];
          for(auto &it:edges){
              int u=it[0];
              int v=it[1];
              int w=it[2];
              adj[u].push_back({v, w});
              adj[v].push_back({u, w});
          }
          
          int mini=1e9;
          
          for(int i=0; i<edges.size(); i++){
              int dist=(dijkstra(edges[i][0], edges[i][1], V, adj));
              if(dist!=1e9){
                  mini=min(mini, dist+edges[i][2]);
              }
          }
          return mini;
      }
      
      int dijkstra(int src, int dest, int V, vector<vector<int>>adj[]){
          vector<int>dist(V, 1e9);
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
          pq.push({0, src});
          dist[src]=0;
          while(!pq.empty()){
              auto &it=pq.top();
              int node=it.second;
              int d=it.first;
              pq.pop();
              for(auto& it:adj[node]){
                  int adjN=it[0];
                  int adjW=it[1];
                  if((node==src && adjN==dest) || (node==dest && adjN==src)) continue;
                  if(d+adjW<dist[adjN]){
                      dist[adjN]=d+adjW;
                      pq.push({dist[adjN], adjN});
                  }
              }
          }
          return dist[dest];
      }
  };