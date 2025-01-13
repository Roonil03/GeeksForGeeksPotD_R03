class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int ma = 0;
        int l = 0;
        int r = arr.size() - 1;
        while (l < r){
            int w = r - l;
            int ch = min(arr[l], arr[r]);
            int area = w * ch;
            ma = max(ma, area);
            if(arr[l] < arr[r])
            {
                l++;
            }
            else{
                r--;
            }
        }
        return ma;
    }
};