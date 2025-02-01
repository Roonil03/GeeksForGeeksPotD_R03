class Solution {
  public:
    bool isWordExist(vector<vector<char>>& board, string& word) {
        // Code here
        int row = board.size();
        int col = board[0].size();
        
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
    
private:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int id) {
        if(id == word.length()) {
            return true;
        }
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[id]) {
            return false;
        }
        
        char temp = board[i][j];
        board[i][j] = '#';
        
        bool found = dfs(board, word, i+1, j, id+1) || 
                    dfs(board, word, i-1, j, id+1) || 
                    dfs(board, word, i, j+1, id+1) || 
                    dfs(board, word, i, j-1, id+1);
                    
        board[i][j] = temp;
        return found;
    }
};