class Solution {
  public:
    double power(double b, int e) {
        //you code here
        if (e == 0) {
            return 1;
        }
        bool isNeg = e < 0;
        long exp = abs((long)e); 
        double res = 1.0;
        while (exp > 0) {
            if (exp % 2 == 1) res *= b;
            b *= b;
            exp /= 2;
        }
        return isNeg ? 1.0 / res : res;
    }
};