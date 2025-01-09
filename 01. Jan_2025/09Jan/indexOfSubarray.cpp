class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int s = 0, e = 0, cur = 0;
        while(e < n){
            cur += arr[e];
            while(cur > target && s <= e)
            {
                cur -= arr[s];
                s++;
            }
            if(cur == target)
            {
                return {s + 1, e + 1};
            }
            e++;
        }
        return {-1};
    }
};