class Solution {
  public:
    int maxArea(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> h(m, 0);
        int res {0};
        for(int i {0}; i < n; i++){
            for(int j {0}; j < m; j++){
                if(mat[i][j] == 1){
                    h[j]++;
                } else{
                    h[j] = 0;
                }
            }
            res = max(res, h1(h));
        }
        return res;
    }
    
    int h1(vector<int>& arr){
        stack<int> st;
        arr.push_back(0);
        int res {0};
        for(int i {0}; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                int h = arr[st.top()];
                st.pop();
                int w = st.empty() ? i : i - st.top() - 1;
                res = max(res, h * w);
            }
            st.push(i);
        }
        arr.pop_back();
        return res;
    }
};