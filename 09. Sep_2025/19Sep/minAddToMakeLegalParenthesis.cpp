class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int a {0}, b {0};
        for(char ch : s){
            if(ch == '('){
                a++;
            } else if(ch == ')'){
                if(a > 0){
                    a--;
                } else{
                    b++;
                }
            }
        }
        return a + b;
    }
};