class Solution {
  public:
    bool divby13(string &s) {
        // code here
        int rem = 0;
        for (char d : s) {
            rem = (rem * 10 + (d - '0')) % 13;
        }
        return rem == 0;
    }
};