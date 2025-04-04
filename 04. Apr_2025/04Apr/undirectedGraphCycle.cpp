class Solution {
    public:
      bool isCycle(int V, vector<vector<int>>& edges) {
          // Code here
          unordered_map<int, vector<int>> adj;
          for(auto& e: edges){
              adj[e[0]].push_back(e[1]);
              adj[e[1]].push_back(e[0]);
          }
          vector<bool> vis(V, false);
          for (int i = 0; i < V; i++){
              if(!vis[i]){
                  if(helper(i, -1, vis, adj)){
                      return true;
                  }
              }
          }
          return false;
      }
      
      bool helper(int v, int p, vector<bool>& vis, unordered_map<int, vector<int>>& adj){
          vis[v] = true;
          for(int a : adj[v]){
              if(!vis[a]){
                  if (helper(a, v, vis, adj)){
                      return true;
                  } 
              } else if(a != p){
                  return true;
              }
          }
          return false;
      }
  };