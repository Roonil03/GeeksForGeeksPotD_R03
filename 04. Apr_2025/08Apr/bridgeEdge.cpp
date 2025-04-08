class Solution {
    public:
      bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
          // Code here
          vector<vector<int>> adj(V);
          for (auto &edge : edges) {
              adj[edge[0]].push_back(edge[1]);
              adj[edge[1]].push_back(edge[0]);
          }
          vector<int> disc(V, -1), low(V, -1), parent(V, -1);
          int time = 0;
          for (int i = 0; i < V; ++i) {
              if (disc[i] == -1) {
                  if (dfs(i, adj, disc, low, parent, time, c, d)) {
                      return true;
                  }
              }
          }
          return false;
      }
      bool dfs(int u, vector<vector<int>>& adj, vector<int>& disc, vector<int>& low, vector<int>& parent, int& time, int c, int d) {
          disc[u] = low[u] = ++time;
          for (int v : adj[u]) {
              if (disc[v] == -1) {
                  parent[v] = u;
                  if (dfs(v, adj, disc, low, parent, time, c, d)) {
                      return true;
                  }
                  low[u] = min(low[u], low[v]);
                  if (low[v] > disc[u]) {
                      if ((u == c && v == d) || (u == d && v == c)) {
                          return true;
                      }
                  }
              } else if (v != parent[u]) {
                  low[u] = min(low[u], disc[v]);
              }
          }
          return false;
      }
  };
  