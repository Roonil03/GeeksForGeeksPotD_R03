class Solution {
  public:
    int countValid(int n, vector<int>& arr) {
        // code here
        unordered_set<int> m(arr.begin(), arr.end());
        int tot = 9 * pow(10, n - 1);
        unordered_set<int> t;
        for (int d {0}; d <= 9; d++) {
            if (m.find(d) == m.end()) {
                t.insert(d);
            }
        }
        if(t.empty()){
            return tot;
        }
        int comp {0};
        int a {0};
        for(int d{1}; d <= 9; d++){
            if(t.find(d) != t.end()){
                a++;
            }
        }
        int b = t.size();
        if (n == 1){
            comp = a;
        } else{
            comp = a;
            for(int i{1}; i <= n - 1; i++){
                comp *= b;
            }
        }
        return tot - comp;
    }
};
