class Solution {
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        vector<int>res;
        int n = preorder.size();
        function<void(int, int)> dfs = [&](int l, int r) {
            if (l > r){
                return;
            }
            if (l == r) {
                res.push_back(preorder[l]);
                return;
            }
            int root = preorder[l];
            int id = l + 1;
            while(id <= r && preorder[id] < root){
                id++;
            }
            dfs(l+1, id - 1);
            dfs(id, r);
        };
        dfs(0, n-1);
        return res;
    }
};