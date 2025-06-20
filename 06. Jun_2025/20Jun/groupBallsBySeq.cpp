class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if (n % k != 0){
            return false;
        }
        map<int, int> freq;
        for(int i : arr){
            freq[i]++;
        }
        while(!freq.empty()){
            int s = freq.begin()->first;
            for(int i {0}; i < k; i++){
                int n = s + i;
                if(freq[n] == 0){
                   return false; 
                }
                freq[n]--;
                if(freq[n] == 0){
                    freq.erase(n);
                }
            }
        }
        return true;
    }
};