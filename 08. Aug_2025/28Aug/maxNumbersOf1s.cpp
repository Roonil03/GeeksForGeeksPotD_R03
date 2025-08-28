class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        int l {0}, z {0}, res {0};
        for(int r {0}; r < arr.size(); r++){
            if(arr[r] == 0){
                z++;
            }
            while(z > k){
                if(arr[l] == 0){
                    z--;
                }
                l++;
            }
            res = max(res, r - l + 1);
        }
        return res;
    }
};
