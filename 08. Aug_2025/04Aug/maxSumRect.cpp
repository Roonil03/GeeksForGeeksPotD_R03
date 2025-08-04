class Solution {
  public:
    int maxRectSum(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int res {INT_MIN};
        for(int l {0}; l < m; l++){
            vector<int> temp(n, 0);
            for(int r = l; r < m; r++){
                for(int r1 {0}; r1 < n; r1++){
                    temp[r1] += mat[r1][r];
                }
                res = max(res, kdane(temp));
            }
        }
        return res;
    }
    
    int kdane(vector<int> arr){
        int res = arr[0], cur = arr[0];
        for(int i {1}; i < arr.size(); i++){
            cur = max(arr[i], cur + arr[i]);
            res = max(res, cur);
        }
        return res;
    }
};
