class Solution {
  public:
    int cuts(string s) {
        // code here
        int n = s.size();
        vector<string> pow5;
        for (unsigned long long v = 1; ; v *= 5) {
            string b;
            unsigned long long t = v;
            while (t) {
                b.push_back((t & 1) ? '1' : '0');
                t >>= 1;
            }
            reverse(b.begin(), b.end());
            if (b.size() > n) break;
            pow5.push_back(b);
        }
        unordered_set<string> good(pow5.begin(), pow5.end());
        const int INF = n + 5;
        vector<int> dp(n + 1, INF);
        dp[n] = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0'){
                continue;
            }
            string cur;
            for (int j = i; j < n; ++j) {
                cur.push_back(s[j]);
                if (good.count(cur) && dp[j + 1] != INF){
                    dp[i] = min(dp[i], 1 + dp[j + 1]);
                }
            }
        }
        return dp[0] == INF ? -1 : dp[0];
    }
};