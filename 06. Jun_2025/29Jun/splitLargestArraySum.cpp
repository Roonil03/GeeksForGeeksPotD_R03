class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
        int l = *max_element(arr.begin(), arr.end()), r {0};
        for (int x : arr){
            r += x;
        }
        while(l < r){
            int m = l + (r - l) / 2, count {1}, s {0};
            for(int x : arr){
                if(s + x > m){
                    count++;
                    s = 0;
                }
                s += x;
            }
            if(count > k){
                l = m + 1;
            } else{
                r = m;
            }
        }
        return l;
    }
};