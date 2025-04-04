class Solution {
    public:
      int orangesRotting(vector<vector<int>>& mat) {
          // Code here
          int n = mat.size();
          int m = mat[0].size();
          queue<pair<pair<int, int>,int>> q;
          int f {0};
          for(int i {0}; i< n; i++){
              for (int j {0}; j < m; j++){
                  if(mat[i][j] == 2){
                      q.push({{i,j},0});
                  } else if(mat[i][j] == 1){
                      f++;
                  }
              }
          }
          if (f == 0){
              return 0;
          }
          vector<pair<int,int>> dir {{{-1, 0}, {0,1},{1,0},{0,-1}}};
          int res {0};
          while(!q.empty()){
              int r {q.front().first.first};
              int c {q.front().first.second};
              res =q.front().second;
              q.pop();
              for (auto d : dir){
                  int nr = r + d.first;
                  int nc = c + d.second;
                  if(nr >= 0 && nr < n && nc >= 0 && nc < m && mat[nr][nc] == 1) {
                      mat[nr][nc] = 2;
                      f--;
                      q.push({{nr, nc}, res+1});
                  }
              }
              
          }
          return f == 0 ? res : -1;
      }
  };