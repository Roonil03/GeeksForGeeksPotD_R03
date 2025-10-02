class Solution {
  public:
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>> res;
        vector<int> cur;
        bt(1, k, n, cur, res);
        return res;
    }
    
    void bt(int s, int k, int tar, vector<int>& cur, vector<vector<int>>& res){
        if(k == 0 && tar == 0){
            res.push_back(cur);
            return;
        }
        if(k == 0 || tar <= 0 || s > 9){
            return;
        }
        for(int i = s; i <= 9; i++){
            if(tar - i < 0){
                break;
            }
            cur.push_back(i);
            bt(i + 1, k - 1, tar - i, cur, res);
            cur.pop_back();
        }
    }
};