class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int n = mat1.size();
        int res {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res += findPairsInMat2(mat2, n, x - mat1[i][j]);
            }
        }
        return res;
    }
    
    int findPairsInMat2(vector<vector<int>>& mat2, int n, int target) {
        int count {0}, row{0};
        int col = n - 1;
        while (row < n && col >= 0) {
            if (mat2[row][col] == target) {
                count++;
                row++;
                col--;
            }
            else if (mat2[row][col] < target) {
                row++;
            }
            else {
                col--;
            }
        }
        return count;
    }
};