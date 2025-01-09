class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int res = 0;
        for(int i = n-1 ; i >= 2; --i)
        {
            int l = 0, r = i - 1;
            while(l < r)
            {
                if(arr[l] +arr[r] > arr[i])
                {
                    res += r - l;
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return res;
    }
};