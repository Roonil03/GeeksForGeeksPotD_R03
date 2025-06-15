class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int a = *max_element(arr.begin(), arr.end()), l {1}, r = a;
        while(l < r){
            int m = l + (r - l) / 2;
            int sum{0};
            for(int n : arr){
                sum += (n + m - 1) / m;
                if(sum > k){
                    break;
                }
            }
            if (sum <= k){
                r = m;
            } else{
                l = m + 1;
            }
        }
        return l;
    }
};
