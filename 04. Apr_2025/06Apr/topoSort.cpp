class Solution {
    public:
      vector<int> topoSort(int V, vector<vector<int>>& edges) {
          // code here
          vector<vector<int>> adj(V);
          for(const auto& e : edges){
              adj[e[0]].push_back(e[1]);
          }
          vector<bool> vis(V, false);
          vector<int> res;
          stack<int> s;
          for(int i = 0; i < V; i++){
              if (!vis[i]){
                  dfs(i, adj, vis, s);
              }
          }
          while(!s.empty()){
              res.push_back(s.top());
              s.pop();
          }
          return res;
      }
    private:
      void dfs(int v, vector<vector<int>>& adj, vector<bool>& vis, stack<int>& s){
          vis[v] = true;
          for(int u : adj[v]){
              if(!vis[u]){
                  dfs(u, adj, vis, s);
              }
          }
          s.push(v);
      }
  };