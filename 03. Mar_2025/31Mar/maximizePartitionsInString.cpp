class Solution {
    public:
      int maxPartitions(string &s) {
          // code here
          // unordered_set<char>seen;
          // int res {0};
          // for (char c: s){
          //     if(seen.find(c) != seen.end()){
          //         seen.clear();
          //         res++;
          //     }
          //     seen.insert(c);
          // }
          // return res+1;
          map<int,int>m;
          for(auto &i:s){
              m[i]++;
          }
          int ans=0,j=0;
          for(int i=0;i<s.size();i++){
              m[s[i]]--;
              while(j<=i&&m[s[j]]==0){
                  j++;
              }
              if(j==i+1){
                 ans++;
              }
          }
          return ans;
      }
  };