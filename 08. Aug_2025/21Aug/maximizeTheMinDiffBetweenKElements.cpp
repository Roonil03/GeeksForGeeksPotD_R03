class Solution {
  public:
    int maxMinDiff(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int l {0}, r = arr.back() - arr.front();
        int res {0};
        while(l <= r){
            int m = l + (r - l) / 2;
            if(h1(arr, k, m)){
                res = m;
                l = m + 1;
            } else{
                r = m - 1;
            }
        }
        return res;
    }
    
    bool h1(vector<int>& arr, int k, int m){
        int count {1};
        int l = arr[0];
        for(int i {1}; i < arr.size(); i++){
            if(arr[i] - l >= m){
                count++;
                l = arr[i];
                if(count >= k){
                    return true;
                }
            }
        }
        return false;
    }
};
