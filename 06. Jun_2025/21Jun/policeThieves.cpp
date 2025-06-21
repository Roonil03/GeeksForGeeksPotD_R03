class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n = arr.size();
        queue<int> pol, th;
        int res {0};
        for (int i {0}; i < n; i++){
            if(arr[i] == 'P'){
                pol.push(i);
            } else if(arr[i] == 'T'){
                th.push(i);
            }
            while(!pol.empty() && !th.empty()){
                int p = pol.front(), t = th.front();
                if(abs(p - t) <= k){
                    ++res;
                    pol.pop();
                    th.pop();
                } else if(t < p){
                    th.pop();
                } else{
                    pol.pop();
                }
            }
        }
        return res;
    }
};