class Solution {
    public:
      int countIslands(vector<vector<char>>& grid) {
          // Code here
          int n = grid.size();
          int m = grid[0].size();
          int cnt = 0;
          for(int i = 0; i < n; i++) {
              for(int j = 0; j < m; j++) {
                  if(grid[i][j] == 'L') {
                      dfs(grid, i, j);
                      cnt++;
                  }
              }
          }
          return cnt;
      }
    private:
      void dfs(vector<vector<char>>& grid, int row, int col) {
          int n = grid.size();
          int m = grid[0].size();
          if(row < 0 || col < 0 || row >= n || col >= m || grid[row][col] == 'W'){
              return;
          }
          grid[row][col] = 'W';
          for(int i = -1; i <= 1; i++) {
              for(int j = -1; j <= 1; j++) {
                  dfs(grid, row + i, col + j);
              }
          }
      }
  };