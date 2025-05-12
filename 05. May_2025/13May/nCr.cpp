class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if (r > n){
            return 0;
        }
        r = min(r, n-r);
        long res {1};
        for (int i {1}; i <= r; i++){
            res *= (n-i+1);
            res/=i;
        }
        return (int)res;
    }
};
