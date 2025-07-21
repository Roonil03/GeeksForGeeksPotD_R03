// class Solution {
//   public:
//     static const int MAXM = 1000010;
//     static int mu[MAXM];
//     static bool vis[MAXM];
//     static vector<int> primes;

//     int cntCoprime(vector<int>& arr) {
//         // code here
//         h1();
//         int n = arr.size();
//         int M {0};
//         for (int x : arr) M = max(M, x);
//         vector<long long> freq(M + 1, 0);
//         for (int x : arr) {
//             if (x > 0 && x <= M){
//                 ++freq[x];
//             }
//         }
//         long long res {0};
//         for (int d {1}; d <= M; ++d) {
//             if (mu[d] == 0){
//                 continue;
//             }
//             long long cnt {0};
//             for (int m = d; m <= M; m += d) {
//                 cnt += freq[m];
//             }
//             long long pairs = cnt * (cnt - 1) / 2;
//             res += mu[d] * pairs;
//         }
//         return (int)res;
//     }
    
//     void h1(){
//         memset(vis, 0, sizeof(vis));
//         mu[1] = 1;
//         for (int i {2}; i < MAXM; ++i) {
//             if (!vis[i]) {
//                 primes.push_back(i);
//                 mu[i] = -1;
//             }
//             for (int p : primes) {
//                 if (1LL * i * p >= MAXM){
//                     break;
//                 }
//                 vis[i * p] = true;
//                 if (i % p == 0) {
//                     mu[i * p] = 0;
//                     break;
//                 } else {
//                     mu[i * p] = -mu[i];
//                 }
//             }
//         }
//     }
// };

class Solution {
  public:
    int cntCoprime(vector<int> &arr) {
        int n = arr.size(), m = 0;
        for(int i = 0; i < n; i++){
            m = max(m, arr[i]);
        }
        vector<int> freq(m + 1, 0), dp(m + 1, 0);
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        for(int i = m; i >= 1; i--) {
            int c = 0;
            for(int j = i; j <= m; j += i) {
                dp[i] -= dp[j];
                c += freq[j];
            }
            dp[i] += (c * (c - 1)) / 2;
        }
        return dp[1];
    }
};
