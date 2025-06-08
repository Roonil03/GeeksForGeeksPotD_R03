class Solution {
  public:
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here
        vector<vector<int>> adj(V);
        for(const auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
        }
        vector<int> dp(V, -1);
        return dfs(adj, dp, src, dest);
    }
    
    int dfs(vector<vector<int>>& adj, vector<int>& dp, int curr, int dest) {
        if(curr == dest){
            return 1;
        }
        if(dp[curr] != -1){
            return dp[curr];
        }
        int paths = 0;
        for(int next : adj[curr]) {
            paths += dfs(adj, dp, next, dest);
        }
        return dp[curr] = paths;
    }
};