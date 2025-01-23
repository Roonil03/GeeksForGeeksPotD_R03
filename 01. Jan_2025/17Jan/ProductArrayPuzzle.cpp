class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
    //     int n = arr.size();
    //     long p = 1;
    //     vector<int> res(n, 1);
    //     for(int i = 0; i < n; i++)
    //     {
    //         p *= arr[i] == 0?1: arr[i];
    //     }
    //     for(int i = 0 ; i < n; i++)
    //     {
    //         if (arr[i] == 0){
    //             res[i] = p;
    //         }
    //         else{
    //             res[i] = p / arr[i];
    //         }
    //     }
    //     return res;
    int n = arr.size();
    vector<int> res(n, 1);
    for (int i = 1; i < n; ++i) {
        res[i] = res[i - 1] * arr[i - 1];
    }
    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
        res[i] *= suffixProduct;
        suffixProduct *= arr[i];
    }

    return res;
    }
};