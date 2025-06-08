class Solution {
  public:
    // bool isSumString(string &s) {
    //     // code here
    //     int n = s.size();
    //     for(int i{1}; i < n/2; i++){
    //         for(int j{1}; i+j < n; j++){
    //             if(check(s, 0, i, j)){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    
    // bool check(string& s, int start, int len1, int len2){
    //     int n = s.size();
    //     string a = s.substr(start, len1);
    //     string b = s.substr(start+len1, len2);
    //     if(!isValid(a) || !isValid(b)){
    //         return false;
    //     }
    //     string sum;
    //     int i = a.size() - 1, j = b.size() - 1, carry = 0;
    //     while (i >=0 || j >= 0 || carry){
    //         int d1 = i >= 0 ? a[i--] - '0' : 0;
    //         int d2 = j >= 0 ? b[j--] - '0' : 0;
    //         int tot = d1 + d2 + carry;
    //         sum.push_back('0' + tot % 10);
    //         carry = tot / 10;
    //     }
    //     reverse(sum.begin(), sum.end());
    //     int sumLen = sum.size();
    //     int next = start + len1 + len2;
    //     if (next + sumLen > n){
    //         return false;
    //     }
    //     if (s.substr(next, sumLen) != sum){
    //         return false;
    //     }
    //     if (next + sumLen == n){
    //         return true;
    //     }
    //     return check(s, start + len1, len2, sumLen);
    // }
    
    // bool isValid(string& s){
    //     return s.size() == 1 || s[0] != '0';
    // }
    bool isSumString(string &s) {
        int n = s.size();
        for (int i = 1; i <= n / 2; i++) {
            for (int j = 1; max(i, j) <= n - i - j; j++) {
                if (check(s, 0, i, j)){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool check(const string& s, int start, int len1, int len2) {
        int n = s.size();
        string a = s.substr(start, len1);
        string b = s.substr(start + len1, len2);
        if (!isValid(a) || !isValid(b)){
            return false;
        }
        string sum = addStrings(a, b);
        int sumLen = sum.size();
        int next = start + len1 + len2;
        if (next + sumLen > n){
            return false;
        }
        if (s.substr(next, sumLen) != sum){
            return false;
        }
        if (next + sumLen == n){
            return true;
        }
        return check(s, start + len1, len2, sumLen);
    }
    
    string addStrings(const string& num1, const string& num2) {
        string res;
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int d1 = i >= 0 ? num1[i--] - '0' : 0;
            int d2 = j >= 0 ? num2[j--] - '0' : 0;
            int tot = d1 + d2 + carry;
            res.push_back('0' + tot % 10);
            carry = tot / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
    
    bool isValid(const string& s) {
        return s.size() == 1 || s[0] != '0';
    }
};