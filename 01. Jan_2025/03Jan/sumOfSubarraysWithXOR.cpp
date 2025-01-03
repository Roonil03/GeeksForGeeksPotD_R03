class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> freq;
        int sum = 0;
        long res = 0;
        for(int n : arr){
            sum ^= n;
            if (sum == k){
                res++;
            }
            if(freq.find(sum^k) != freq.end()){
                res += freq[sum^k];
            }
            freq[sum]++;
        }
        return res;
    }
};