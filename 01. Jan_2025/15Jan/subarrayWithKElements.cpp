class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
       unordered_map<int, int> m;
       int sum = 0, res = 0;
       int n = arr.size();
       for(int i = 0 ; i < n; i++)
       {
           sum += arr[i];
           if(sum == k)
           {
               res = i + 1;
           }
           if(m.find(sum - k) != m.end())
           {
               res = max(res, i- m[sum - k]);
           }
           if(m.find(sum) == m.end())
           {
               m[sum] = i;
           }
       }
       return res;
    }
};