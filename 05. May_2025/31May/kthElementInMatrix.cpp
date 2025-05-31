class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n = mat.size();
        using T = tuple<int, int, int>;
        priority_queue<T, vector<T>, greater<T>> h;
        for (int i = 0; i < n; ++i){
            h.emplace(mat[i][0], i, 0);
        }
        int res = 0;
        for (int cnt = 0; cnt < k; ++cnt) {
            int val, r, c;
            tie(val, r, c) = h.top();
            h.pop();
            res = val;
            if (c + 1 < n)
                h.emplace(mat[r][c + 1], r, c + 1);
        }
        return res;
    }
};