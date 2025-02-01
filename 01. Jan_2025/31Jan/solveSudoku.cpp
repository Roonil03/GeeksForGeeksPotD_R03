class Solution {
  private:
    struct Sudoku {
        bool rows[9][9];
        bool cols[9][9];
        bool boxes[9][9];
        
        Sudoku() {
            memset(rows, 0, sizeof(rows));
            memset(cols, 0, sizeof(cols));
            memset(boxes, 0, sizeof(boxes));
        }
    };
    
    bool isValid(Sudoku& s, int r, int c, int num) {
        int b = (r / 3) * 3 + c / 3;
        return !s.rows[r][num] && !s.cols[c][num] && !s.boxes[b][num];
    }
    
    void placeNumber(Sudoku& s, vector<vector<int>>& board, int r, int c, int num) {
        board[r][c] = num + 1;
        int b = (r / 3) * 3 + c / 3;
        s.rows[r][num] = s.cols[c][num] = s.boxes[b][num] = true;
    }
    
    void removeNumber(Sudoku& s, vector<vector<int>>& board, int r, int c, int num) {
        board[r][c] = 0;
        int b = (r / 3) * 3 + c / 3;
        s.rows[r][num] = s.cols[c][num] = s.boxes[b][num] = false;
    }
    
    bool backtrack(Sudoku& s, vector<vector<int>>& board, int r, int c) {
        if (r == 9) return true;
        if (c == 9) return backtrack(s, board, r + 1, 0);
        if (board[r][c] != 0) return backtrack(s, board, r, c + 1);
        
        for (int num = 0; num < 9; num++) {
            if (isValid(s, r, c, num)) {
                placeNumber(s, board, r, c, num);
                if (backtrack(s, board, r, c + 1)) return true;
                removeNumber(s, board, r, c, num);
            }
        }
        return false;
    }
    
public:
    void solveSudoku(vector<vector<int>>& mat) {
        Sudoku s;
        
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (mat[r][c] != 0) {
                    int num = mat[r][c] - 1;
                    int b = (r / 3) * 3 + c / 3;
                    s.rows[r][num] = s.cols[c][num] = s.boxes[b][num] = true;
                }
            }
        }
        
        backtrack(s, mat, 0, 0);
    }
};