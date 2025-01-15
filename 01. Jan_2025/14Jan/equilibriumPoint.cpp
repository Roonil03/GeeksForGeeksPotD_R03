class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int r = 0;
        for(int i = 0; i < n ; i++)
        {
            r += arr[i];
        }
        int l = 0;
        for(int i = 0 ; i <= n ; i++)
        {
            r -= arr[i];
            if(l == r)
            {
                return i;
            }
            l += arr[i];
        }
        return -1;
    }
};