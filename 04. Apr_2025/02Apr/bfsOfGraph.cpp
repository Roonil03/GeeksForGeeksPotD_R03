class Solution {
    public:
      // Function to return Breadth First Traversal of given graph.
      vector<int> bfs(vector<vector<int>> &adj) {
          // Code here
          vector<bool> vis(adj.size(), false);
          vector<int> tr;
          queue<int> q;
          q.push(0);
          vis[0] = 1;
          while(!q.empty()){
              int n = q.front();
              q.pop();
              tr.push_back(n);
              for(int &ng : adj[n]){
                  if(!vis[ng]){
                      vis[ng] = 1;
                      q.push(ng);
                  }
              }
          }
          return tr;
      }
  };