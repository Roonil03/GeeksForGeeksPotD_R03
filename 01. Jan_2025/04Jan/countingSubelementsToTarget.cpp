class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // int count = 0;
        // int len = arr.size();
        // for(int i = 0; i< len; i++){
        //     for(int j = i+1; j < len; j++){
        //         for(int k = j+1; k < len; k++){
        //             if(arr[i] + arr[j] + arr[k] == target){
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;
        int ans = 0;
        int size = arr.size();
        
        for(int i = 0; i < size; i++) {
            int j = i + 1, k = size - 1;
            
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                
                if(sum < target) {
                    j++;
                }
                else if(sum > target) {
                    k--;
                }
                else {
                    int e1 = arr[j], e2 = arr[k];
                    int c1 = 0, c2 = 0;
                    
                    while(j <= k && arr[j] == e1) {
                        c1++;
                        j++;
                    }
                    
                    while(j <= k && arr[k] == e2) {
                        c2++;
                        k--;
                    }
                    
                    if(e1 == e2) {
                        ans += (c1 * (c1 - 1)) / 2;
                    }
                    else {
                        ans += c1 * c2;
                    }
                }
            }
        }
        return ans;
    }
};