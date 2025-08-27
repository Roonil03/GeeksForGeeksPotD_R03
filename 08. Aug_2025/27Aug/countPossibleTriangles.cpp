class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int res {0};
        for(int k = arr.size() - 1; k >= 2; k--){
            int i {0}, j = k - 1;
            while(i < j){
                if(arr[i] + arr[j] > arr[k]){
                    res += (j - i);
                    j--;
                } else{
                    i++;
                }
            }
        }
        return res;
    }
};
