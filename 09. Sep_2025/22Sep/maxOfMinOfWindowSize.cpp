class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> l(n, -1), r(n, n);
        vector<int> res(n, 0);
        stack<int> st;
        for(int i {0}; i < n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                l[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(!st.empty()){
                r[i] = st.top();
            }
            st.push(i);
        }
        for(int i {0}; i < n; i++){
            int ws = r[i] - l[i] - 1;
            res[ws - 1] = max(res[ws - 1], arr[i]);
        }
        for(int i = n - 2; i >= 0; i--){
            res[i] = max(res[i], res[i+1]);
        }
        return res;
    }
};