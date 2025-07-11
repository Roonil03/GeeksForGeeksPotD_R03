class Solution {
  public:
    int countConsec(int n) {
        // code here
        int a {1}, b {1};
        for(int i {2}; i <= n; i++){
            // int x = a + b;
            // int y = a;
            // a = x;
            // b = y;
            a += b;
            b = a - b;
        }
        return (1 << n) - a - b;
    }
};