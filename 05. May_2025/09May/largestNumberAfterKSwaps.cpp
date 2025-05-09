class Solution {
    public:
      // Function to find the largest number after k swaps.
      string findMaximumNum(string& s, int k) {
          // code here.
          string res = s;
          helper(s, k, 0, res);
          return res;
      }
      
      void helper(string& s, int k, int id, string& res){
          if (k == 0 || id == s.size()){
              return;
          }
          char dig = s[id];
          for (int i {id+1}; i < s.size(); i++){
              if (s[i] > dig){
                  dig = s[i];
              }
          }
          if (dig != s[id]){
              k--;
          }
          for (int i {id}; i < s.size(); i++){
              if (s[i] == dig){
                  swap(s[id], s[i]);
                  if (s > res){
                      res = s;
                  }
                  helper(s, k, id +1, res);
                  swap(s[id], s[i]);
              }
          }
      }
  };