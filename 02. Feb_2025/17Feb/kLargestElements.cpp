class Solution {
    public:
      vector<int> kLargest(vector<int>& arr, int k) {
          // Your code here
          priority_queue<int, vector<int>, greater<int>> p;
          for(int x : arr){
              if(p.size() < k) {
                  p.push(x);
              }
              else {
                  if(p.top() < x){
                      p.pop();
                      p.push(x);
                  }
              }
          }
          vector<int> r;
          while(!p.empty()){
              r.push_back(p.top());
              p.pop();
          }
          reverse(r.begin(), r.end());
          return r;
      }
  };