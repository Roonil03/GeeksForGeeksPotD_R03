class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        string num1 = "", num2 = "";
        for (size_t i {0}; i < arr.size(); ++i) {
            if (i % 2 == 0){
                num1 += (arr[i] + '0');
            }
            else{
                num2 += (arr[i] + '0');
            }
        }
        auto addStrings = [](string &a, string &b) {
            string res = "";
            int i = a.size()-1, j = b.size()-1, carry = 0;
            while (i >= 0 || j >= 0 || carry) {
                int sum = carry;
                if (i >= 0){
                    sum += a[i--] - '0';
                }
                if (j >= 0){
                    sum += b[j--] - '0';
                }
                res.push_back((sum % 10) + '0');
                carry = sum / 10;
            }
            reverse(res.begin(), res.end());
            int k {0};
            while (k < res.size() - 1 && res[k] == '0'){
                ++k;
            }
            return res.substr(k);
        };
        return addStrings(num1, num2);
    }
};