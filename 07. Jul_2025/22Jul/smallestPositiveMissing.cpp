class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        int res {1};
        unordered_map<int, bool> m;
        for(int i{0}; i < n; i++){
            if(arr[i] > 0){
                m[arr[i]] = true;
            }
        }
        for(int i{1};; i++){
            if(m.find(i) == m.end()){
                return i;
            }
        }
        return -1;
        // unordered_map<int, int>
    }
};