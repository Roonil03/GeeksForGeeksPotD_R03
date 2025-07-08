class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>res(n, -1);
        unordered_map<int, int> freq;
        for(int num : arr){
            freq[num]++;
        }
        stack<int>st;
        st.push(arr[n-1]);
        res[n-1] = -1;
        for(int i = n - 2; i >= 0; i--){
            while(st.size() > 0 && freq[arr[i]] >= freq[st.top()]){
                st.pop();
            }
            if(st.size() > 0){
                res[i] = st.top();
            } else{
                res[i] = -1;
            }
            st.push(arr[i]);
        }
        return res;
    }
};
