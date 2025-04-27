class Solution {
    public:
      /*You are required to complete below function */
      string multiplyStrings(string& s1, string& s2) {
          // Your code here
          // int i {0}, n1 {0}, n2{0};
          // while(i < s1.length() && i < s2.length()){
          //     n1 = (s1[i] - '0') + n1 * 10;
          //     n2 = (s2[i] - '0') + n2 * 10;
          //     i++;
          // }
          // while(i < s1.length()){
          //   n1 = (s1[i++] - '0') + n1 * 10;
          // }
          // if (!n1){
          //     return "0";
          // }
          // while(i < s2.length()){
          //   n2 = (s2[i++] - '0') + n2 * 10;
          // }
          // if (!n2){
          //     return "0";
          // }
          // string res = "";
          // int temp
          bool isNegative = false;
          if (s1[0] == '-') {
              isNegative = !isNegative;
              s1 = s1.substr(1);
          }
          if (s2[0] == '-') {
              isNegative = !isNegative;
              s2 = s2.substr(1);
          }
          s1 = removeLeadingZeros(s1);
          s2 = removeLeadingZeros(s2);
          if (s1 == "0" || s2 == "0") {
              return "0";
          }
          int n1 = s1.length(), n2 = s2.length();
          string result(n1 + n2, '0');
          for (int i = n1 - 1; i >= 0; i--) {
              for (int j = n2 - 1; j >= 0; j--) {
                  int mul = (s1[i] - '0') * (s2[j] - '0');
                  int sum = mul + (result[i + j + 1] - '0');
                  result[i + j + 1] = (sum % 10) + '0'; 
                  result[i + j] += (sum / 10);  
              }
          }
          size_t startPos = result.find_first_not_of('0');
          result = result.substr(startPos);
          if (isNegative) {
              result = "-" + result;
          }
          return result;
      }
      
      string removeLeadingZeros(string s) {
          size_t startPos = s.find_first_not_of('0');
          if (startPos == string::npos) {
              return "0";
          }
          return s.substr(startPos);
      }
  };