class Solution {
    public:
      stack<int> stk;
      stack<int> minStack;
      
      Solution() {
          // code here
          minStack.push(INT_MAX);
      }
  
      // Add an element to the top of Stack
      void push(int x) {
          // code here
          stk.push(x);
          if (x <= minStack.top()) {
              minStack.push(x);
          }
      }
  
      // Remove the top element from the Stack
      void pop() {
          // code here
          if (!stk.empty()) {
              if (stk.top() == minStack.top()) {
                  minStack.pop();
              }
              stk.pop();
          }
      }
  
      // Returns top element of the Stack
      int peek() {
          // code here
          if (stk.empty()) {
              return -1;
          }
          return stk.top();
      }
  
      // Finds minimum element of Stack
      int getMin() {
          // code here
          if (minStack.size() == 1) {
              return -1;
          }
          return minStack.top();
      }
  };