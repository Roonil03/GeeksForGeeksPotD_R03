class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        sort(x.begin(), x.end(), greater<int>());
        sort(y.begin(), y.end(), greater<int>());
        long long res {0}, hCount {1}, vCount {1}, i {0}, j {0};
        while (i < x.size() && j < y.size()){
            if (x[i] >= y[j]){
                res += 1LL * x[i] * hCount;
                vCount++;
                i++;
            } else{
                res += 1LL * y[j] * vCount;
                hCount++;
                j++;
            }
        }
        while (i < x.size()) {
            res += 1LL * x[i] * hCount;
            vCount++;
            i++;
        }
        while (j < y.size()) {
            res += 1LL * y[j] * vCount;
            hCount++;
            j++;
        }
        return (int)res;
    }
};
