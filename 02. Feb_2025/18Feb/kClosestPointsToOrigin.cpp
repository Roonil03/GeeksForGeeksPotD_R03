class Solution {
    public:
      vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          // Your code here
          auto f = [&](const vector<int>& a, const vector<int>& b) {
              int d = a[0]*a[0] + a[1]*a[1];
              int e = b[0]*b[0] + b[1]*b[1];
              return d < e;
          };
          priority_queue<vector<int>, vector<vector<int>>, decltype(f)> p(f);
          for(auto &x : points) {
              p.push(x);
              if(p.size() > (size_t)k) p.pop();
          }
          vector<vector<int>> r;
          while(!p.empty()){
              r.push_back(p.top());
              p.pop();
          }
          return r;
      }
  };