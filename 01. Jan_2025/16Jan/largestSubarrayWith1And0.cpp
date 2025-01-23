class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> m;
        int len = 0, sum = 0;
        m[0] = -1;
        for (int i = 0; i < arr.size(); i++){
            sum += (arr[i] == 0) ? -1 : 1;
            if(m.find(sum) != m.end()){
                len = max(len, i - m[sum]);
            }
            else{
                m[sum] = i
            ;}
        }
        return len;
    }
};