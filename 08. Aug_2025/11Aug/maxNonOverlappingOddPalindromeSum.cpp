class Solution {
  public:
    int maxSum(string &s) {
        // code here
        
        // int n = s.size();
        // vector<int> l(n, 1);
        // vector<int> r(n, 1);
        
        // for(int m {0}; m < n; m++){
        //     int a = m, b = m;
        //     while(a >= 0 && b < n && s[a] == s[b]){
        //         int len = b - a + 1;
        //         l[b] = max(l[b], len);
        //         r[a] = max(r[a], len);
        //         a--;
        //         b++;
        //     }
        // }
        // for(int i {1}; i < n ;i++){
        //     l[i] = max(l[i], l[i-1]);
        // }
        // for(int i = n - 2; i >= 0 ; i--){
        //     r[i] = max(r[i], r[i + 1]);
        // }
        
        // vector<int>p (n, 0);
        // int m {0}, b {0};
        // for(int i{0}; i < n; i++){
        //     if (i < b){
        //         p[i] = min(b - i, p[2 * m - i]);
        //     }
        //     while(i + p[i] + 1 < n && i - p[i] - 1 >= 0 && s[i + p[i] + 1] == s[i - p[i] - 1]){
        //         p[i]++;
        //     }
        //     if(i + p[i] > b){
        //         m = i;
        //         b = i + p[i];
        //     }
        // }
        // for(int i {0}; i < n ; i++){
        //     int rad = p[i];
        //     int len = 2 * rad + 1;
        //     int s = i - rad;
        //     int e = i + rad;
        //     if(len >= 1){
        //         l[e] = max(l[e], len);
        //         r[s] = max(r[s], len);
        //     }
        // }
        // for(int i{1}; i < n; i++){
        //     l[i] = max(l[i], l[i-1]);
        // }
        // for(int i = n -2; i >= 0 ; i--){
        //     r[i] = max(r[i], r[i+1]);
        // }
        
        // int res {0};
        // for(int i{1}; i < n; i++){
        //     res = max(res, l[i-1] + r[i]);
        // }
        // return res;
        
        int n = (int)s.size();
        if (n < 2) return 0;
        vector<int> rad(n); 
        for (int i = 0, L = 0, R = -1; i < n; ++i) {
            int k = (i > R) ? 1 : min(rad[L + R - i], R - i + 1);
            while (i - k >= 0 && i + k < n && s[i - k] == s[i + k]) ++k;
            rad[i] = k;
            if (i + k - 1 > R) { 
                L = i - k + 1;
                R = i + k - 1;
            }
        }
        vector<int> bestEnd(n, 0), bestStart(n, 0);
        for (int c = 0; c < n; ++c) {
            int len = 2 * rad[c] - 1;
            int l = c - rad[c] + 1;      
            int r = c + rad[c] - 1;
            bestEnd[r] = max(bestEnd[r] , len);
            bestStart[l] = max(bestStart[l] , len);
        }
        for (int i = n - 2; i >= 0; --i)
            bestEnd[i]   = max(bestEnd[i]  , bestEnd[i + 1] - 2);
        for (int i = 1; i < n; ++i)
            bestStart[i] = max(bestStart[i], bestStart[i - 1] - 2);
        int bestLeft = 0, ans = 0;
        for (int i = 0; i + 1 < n; ++i) {
            bestLeft = max(bestLeft, bestEnd[i]);
            ans  = max(ans, bestLeft + bestStart[i + 1]);
        }
        return ans;
        
    }
};
