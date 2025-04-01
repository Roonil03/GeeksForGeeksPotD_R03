class Solution {
    public:
      vector<int> dfs(vector<vector<int>>& adj) {
          // Code here
          vector<bool> vis(adj.size(), false);
          vector<int> tr;
          helper(0, adj, vis, tr);
          return tr;
      }
      
      void helper(int s, vector<vector<int>>& adj, vector<bool>& vis, vector<int>& tr){
          vis[s] = true;
          tr.push_back(s);
          for(int u: adj[s]){
              if(!vis[u]){
                  helper(u, adj, vis, tr);
              }
          }
      }
  };