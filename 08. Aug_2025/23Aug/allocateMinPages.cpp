class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k > n){
            return -1;
        }
        int l = *max_element(arr.begin(), arr.end());
        int h = accumulate(arr.begin(), arr.end(), 0);
        int res = -1;
        while(l <= h){
            int m = l + (h - l) / 2;
            if(h1(arr, k, m)){
                res = m;
                h = m - 1;
            } else{
                l = m + 1;
            }
        }
        return res;
    }
    
    bool h1(vector<int>& arr, int k, int p){
        int s {1};
        int cs {0};
        for(int i : arr){
            if(i > p){
                return false;
            }
            if(cs + i > p){
                s++;
                cs = i;
                if(s > k){
                    return false;
                }
            } else{
                cs += i;
            }
        }
        return true;
    }
};