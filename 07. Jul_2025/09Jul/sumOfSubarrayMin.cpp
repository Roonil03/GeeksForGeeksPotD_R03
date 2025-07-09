class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> a(n), b(n);
        for(int i {0}; i < n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            a[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            b[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        int res {0};
        for(int i{0}; i < n; i++){
            int x = i - a[i], y = b[i] - i;
            res += arr[i] * x * y;
        }
        return res;
    }
};