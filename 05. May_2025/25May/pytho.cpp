class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>sq(n);
        for (int i {0}; i < n; i++){
            sq[i] = arr[i] * arr[i];
        }
        unordered_set<int> h(sq.begin(), sq.end());
        for(int i {0}; i < n; i++){
            for(int j {i+1}; j < n; j++){
                int sum = sq[i] + sq[j];
                if(h.count(sum)){
                    for (int k = 0; k < n; k++){
                        if(k != i && k != j && sq[k] == sum){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }
};