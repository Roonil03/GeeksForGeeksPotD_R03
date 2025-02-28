class Solution {
    public:
      int evaluate(vector<string>& arr) {
          // code here
          stack<int> stk;
          for (const string& token : arr) {
              if (token == "+" || token == "-" || token == "*" || token == "/") {
                  int b = stk.top(); stk.pop();
                  int a = stk.top(); stk.pop();
                  if (token == "+"){
                      stk.push(a + b);
                  } else if (token == "-"){
                      stk.push(a - b);
                  } else if (token == "*"){
                      stk.push(a * b);
                  } else if (token == "/"){
                      stk.push(a / b);
                  }
              } else {
                  stk.push(stoi(token));
              }
          }
          return stk.top();
      }
  };