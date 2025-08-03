class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
        // code here
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> diff(n + 2, vector<int>(m + 2, 0));
        for(auto& op: opr){
            int v = op[0], r1 = op[1], c1 = op[2], r2 = op[3], c2 = op[4];
            diff[r1][c1] += v;
            diff[r1][c2 + 1] -= v;
            diff[r2 + 1][c1] -= v;
            diff[r2 + 1][c2 + 1] += v;
        }
        for (int i = 0; i < n + 1; i++){
            for (int j = 1; j < m + 1; j++){
                diff[i][j] += diff[i][j - 1];
            }
        }
        for (int i = 1; i < n + 1; i++){
            for (int j = 0; j < m + 1; j++){
                diff[i][j] += diff[i - 1][j];
            }
        }
        vector<vector<int>> res(n, vector<int>(m));
        for(int i {0}; i < n; i++){
            for(int j {0}; j < m; j++){
                res[i][j] = mat[i][j] + diff[i][j];
            }
        }
        return res;
    }
};