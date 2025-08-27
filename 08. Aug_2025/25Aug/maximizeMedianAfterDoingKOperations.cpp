class Solution {
  public:
    int maximizeMedian(vector<int>& arr, int k) {
        // code here
        // int rt = sqrtl(n);
        // vector<bool> sieve(rt + 1, true);
        // vector<int> primes;
        // for(int i {2}; i <= rt; i++){
        //     if(sieve[i]){
        //         primes.push_back(i);
        //         for(int j = i * i; j <= rt; j += i){
        //             sieve[j] = false;
        //         }
        //     }
        //     int res {0};
        //     for(int p : primes){
        //         int v {1};
        //         for(int k {0}; k < 8 && v <= n / p; k++){
        //             v *= p;
        //         }
        //         if(v == n){
        //             res++;
        //             break;
        //         }
        //         if(v <= n){
        //             res++;
        //         } else{
        //             break;
        //         }
        //     }
        //     int lim = rt;
        //     int s = primes.size();
        //     for(int i {0}; i < s && primes[i] * primes[i] <= lim; i++){
        //         int mq = lim / primes[i];
        //         int id = upper_bound(primes.begin(), primes.end(), mq) - primes.begin() - 1;
        //         if(id > 1){
        //             res += id - i;
        //         }
        //     }
        //     return res;
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        long long l = arr[0];
        long long r = arr[n - 1] + k;
        long long maxMedian = l;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            if (isPossible(n, arr, mid, k)) {
                maxMedian = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return int(maxMedian);
    }
        
    bool isPossible(int n, vector<int>& arr, long long mid, long long k) {
          long long need = 0;
          int half = n / 2;
          if (n % 2) {
              need += max(0LL, mid - (long long)arr[half]);
          }
          else {
              need += max(0LL, 2 * mid - ((long long)arr[half] + arr[half - 1]));
          }
          for (int i = half + 1; i < n; i++) {
              need += max(0LL, mid - (long long)arr[i]);
              if (need > k) return false;
          }
          return need <= k;
    }
};