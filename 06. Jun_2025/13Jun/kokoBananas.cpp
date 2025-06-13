class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int l {1}, r = *max_element(arr.begin(), arr.end());
        while(l < r){
            int m = l + (r - l) / 2;
            if(h1(arr, k, m)){
                r = m;
            } else{
                l = m + 1;
            }
        }
        return l;
    }
    
    bool h1(vector<int>& arr, int k, int sp){
        int h {0};
        for(int i : arr){
            h += (i + sp - 1) / sp;
            if(h > k){
                return false;
            }
        }
        return true;
    }
};