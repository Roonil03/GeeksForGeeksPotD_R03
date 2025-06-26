class Solution {
  public:
    string maxSubseq(string& s, int k) {
        // code here
        int n = s.size();
        int a = n - k;
        vector<char> st;
        for(char ch : s){
            while(!st.empty() && k > 0 && st.back() < ch){
                st.pop_back();
                k--;
            }
            st.push_back(ch);
        }
        while(k--){
            st.pop_back();
        }
        return string(st.begin(), st.begin() + a);
    }
};
