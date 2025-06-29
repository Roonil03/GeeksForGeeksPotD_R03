class Solution {
  public:
    int getCount(int n) {
        // code here
        vector<vector<int>> adj = {
            {0,8},
            {1,2,4},
            {2,1,3,5},
            {3,2,6},
            {4,1,5,7},
            {5,2,4,6,8},
            {6,3,5,9},
            {7,4,8},
            {8,5,7,9,0},
            {9,6,8}
        };
        vector<vector<long long>> dp(n+1, vector<long long>(10,0));
        for(int j{0};j<10;++j){
            dp[1][j]=1;
        }
        for(int i{2};i<=n;++i) {
            for(int j{0};j<10;++j) {
                for(int x: adj[j]) {
                    dp[i][j] += dp[i-1][x];
                }
            }
        }
        long long res{0};
        for(int j{0};j<10;++j){
            res += dp[n][j];
        }
        return res;
    }
};