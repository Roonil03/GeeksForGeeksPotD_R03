class Solution {
  public:
    // int countNumbers(int n) {
    //     // Code Here
    //     int rt = sqrt(n);
    //     vector<bool>seive(rt + 1, true);
    //     vector<int>p;
    //     for (int i {2}; i <= rt; i++){
    //         if(seive[i]){
    //             p.push_back(i);
    //             for(int j = i * i; j <= rt; j+= i){
    //                 seive[j] = false;
    //             }
    //         }
    //     }
    //     int res {0};
    //     for (int i : p){
    //         int v {1};
    //         for(int j {0}; j < 8; j++){
    //             v *= i;
    //             if (v > n){
    //                 break;
    //             }
    //         }
    //         // if(v == n){
    //         //     res++;
    //         //     break;
    //         // }
    //         if(v <= n){
    //             res++;
    //         } else{
    //             break;
    //         }
    //     }
    //     int lim = rt;
    //     int l = p.size();
    //     for (int i {0}; i < l && (1LL * (long long)(p[i] * p[i])) <= (long long)lim; i++){
    //         int m = lim / p[i];
    //         int id = upper_bound(p.begin(), p.end(), m) - p.begin() - 1;
    //         if(id > i){
    //             res += id - i;
    //         }
    //     }
    //     return res;
    
    
    vector<int> sieve(int n){
        vector<bool> isPrime(n, true);
        vector<int> result;
        isPrime[0]=false;
        isPrime[1]=false;
        for(int i=2; i<n; i++){
            if(isPrime[i]){
                for(int j=i*i; j<n; j+=i){
                    isPrime[j]=false;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(isPrime[i]){
                result.push_back(i);
            }
        }
        return result;
    }
    
    int countNumbers(int n) {
        int count=0;
        vector<int> primes = sieve(sqrt(n)+1);
        for(int i=0; i<primes.size(); i++){
            if(pow(primes[i],8)<=n){
                count++;
            }else{
                break;
            }
        }
        for(int i=0; i<primes.size(); i++){
            for(int j=i+1; j<primes.size(); j++){
                if(pow(primes[i],2)*pow(primes[j],2)<=n){
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
    }
};