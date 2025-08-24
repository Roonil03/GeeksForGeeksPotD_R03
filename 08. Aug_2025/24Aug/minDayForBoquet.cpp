class Solution {
  public:
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n = arr.size();
        if(m * k > n){
            return -1;
        }
        int l = *min_element(arr.begin(), arr.end());
        int h = *max_element(arr.begin(), arr.end());
        int res {-1};
        while(l <= h){
            int mid = l + (h - l) / 2;
            if(h1(arr, mid, m, k)){
                res = mid;
                h = mid - 1;
            } else{
                l = mid + 1;
            }
        }
        return res;
    }
    
    bool h1(vector<int>& arr, int d, int m, int k){
        int a {0}, con {0};
        for(int i : arr){
            if(i <= d){
                con++;
                if(con == k){
                    a++;
                    con = 0;
                }
            } else{
                con = 0;
            }
        }
        return a >= m;
    }
};