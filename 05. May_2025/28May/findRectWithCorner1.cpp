class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        for(int i {0}; i < r; i++){
            for(int j {i+1}; j < r; j++){
                unordered_set<int> a;
                for(int k{0}; k < c; k++){
                    if(mat[i][k] == 1 && mat[j][k] == 1){
                        a.insert(k);
                        if(a.size() >= 2){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};