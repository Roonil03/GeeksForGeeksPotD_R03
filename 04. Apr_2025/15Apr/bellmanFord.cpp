// User function Template for C++

class Solution {
    public:
      vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
          // Code here
          vector<int> res(V, 1e8);
          res[src] = 0;
          // for (int i = 1; i < V; ++i) {
          //     for (auto& e : edges) {
          //         int u = e[0], v = e[1], w = e[2];
          //         if (res[u] != 108 && res[u] + w < res[v]) {
          //             res[v] = res[u] + w;
          //         }
          //     }
          // }
      
          // for (auto& e : edges) {
          //     int u = e[0], v = e[1], w = e[2];
          //     if (res[u] != 108 && res[u] + w < res[v]) {
          //         return {-1};
          //     }
          // }
          for(int i = 0; i < V-1; i++)
          {
              for(auto &it : edges)
              {
                  int u = it[0];
                  int v = it[1];
                  int w = it[2];
                  if(res[u] != 1e8 and res[u] + w < res[v])
                  {
                      res[v] =  res[u] + w;     
                  }
                  
              }
          }
          
          for(auto &it : edges)
          {
              int u = it[0];
              int v = it[1];
              int w = it[2];
              if(res[u] != 1e8 and res[u] + w < res[v])
              {
                  return {-1};
              }
                  
          }
          return res;
      }
  };