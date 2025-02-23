class Solution {
    public:
      bool isBalanced(string& s) {
          // code here
          stack<char> stack;
          unordered_map<char, char> bracketPairs = {
              {')', '('},
              {'}', '{'},
              {']', '['}
          };
          for (char c : s) {
              if (c == '(' || c == '{' || c == '[') {
                  stack.push(c);
              } else if (c == ')' || c == '}' || c == ']') {
                  if (stack.empty() || stack.top() != bracketPairs[c]) {
                      return false;
                  }
                  stack.pop();
              }
          }
          return stack.empty();
      }
  };