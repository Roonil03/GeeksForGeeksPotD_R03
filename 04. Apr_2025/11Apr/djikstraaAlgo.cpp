class Solution {
    public:
      vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
          // Code here
          vector<vector<pair<int,int>>> adj(V);
          for(auto& e :edges){
              adj[e[0]].push_back({e[1],e[2]});
              adj[e[1]].push_back({e[0],e[2]});
          }
          vector<int>dist(V, INT_MAX);
          dist[src] = 0;
          priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;
          pq.push({0,src});
          while(!pq.empty()){
              int d = pq.top().first;
              int u = pq.top().second;
              pq.pop();
              if(d > dist[u]){
                  continue;
              }
              for(auto& e: adj[u]){
                  int v = e.first;
                  int w = e.second;
                  if(dist[u] + w < dist[v]){
                      dist[v] = dist[u] + w;
                      pq.push({dist[v], v});
                  }
              }
          }
          return dist;
      }
  };
  