class Solution {
  public:
    int getLongestPrefix(string &s) {
        // code here
        
        // int n = s.size();
        // for(int i = n - 1; i >= 1; i--){
        //     bool ok = true;
        //     for(int j{0}; j < n; j++){
        //         if(s[j] != s[j % i]){
        //             ok = false;
        //             break;
        //         }
        //     }
        //     if(ok){
        //         return i;
        //     }
        // }
        // return -1;
        
        // int n = s.size();
        // vector<int> pi(n, 0);
        // for(int i = 1; i < n; i++) {
        //     int j = pi[i - 1];
        //     while(j > 0 && s[i] != s[j]) {
        //         j = pi[j - 1];
        //     }
        //     if(s[i] == s[j]) {
        //         j++;
        //     }
        //     pi[i] = j;
        // }
        
        // int l = pi[n - 1];
        // while(l > 0) {
        //     bool ok = true;
        //     for(int i = 0; i < n; i++) {
        //         if(s[i] != s[i % l]) {
        //             ok = false;
        //             break;
        //         }
        //     }
        //     if(ok) return l;
        //     l = pi[l - 1];
        // }
        // return -1;
        
        int n = s.size();
        if (n <= 1) return -1;
        vector<int> z(n, 0);
        z[0] = n;
        for (int i=1, l=0, r=0; i<n; ++i) {
            if (i <= r) z[i] = min(r-i+1, z[i-l]);
            
            while (i+z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
            if (i + z[i] - 1 > r) { 
                l = i; 
                r = i + z[i] - 1; 
            }
        }
        for (int i = n - 1; i >= 1; --i) {
            if (z[i] >= n - i) return i;
        }
        return -1;
    }
};