class Solution {
  public:
    int maxKPower(int n, int k) {
        // code here
        int res = INT_MAX;
        for (int p = 2; 1LL * p * p <= k; p++){
            if (k % p == 0){
                int a {0};
                while(k % p == 0){
                    k /= p;
                    a++;
                }
                long long e = h1(n, p);
                res = min(res, int(e / a));
            }
        }
        if(k > 1){
            long long e = h1(n, k);
            res = min(res, int(e));
        }
        return res;
    }
    
    long long h1(int n, int k){
        long long res {0};
        long long d = k;
        while(d <= n){
            res += n / d;
            if(d > n / k){
                break;
            }
            d *= k;
        }
        return res;
    }
};