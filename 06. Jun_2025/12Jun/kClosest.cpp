class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        // auto comp = [x](int a, int b) {
        //     int diffA = abs(a - x);
        //     int diffB = abs(b - x);
        //     if (diffA == diffB) {
        //         return a > b;
        //     }
        //     return diffA < diffB;
        // };
        // priority_queue<int, vector<int>, decltype(comp)> pq(comp);
        // for (int num : arr) {
        //     if (num != x) {
        //         pq.push(num);
        //         if (pq.size() > k) {
        //             pq.pop();
        //         }
        //     }
        // }
        // vector<int> res;
        // while (!pq.empty()) {
        //     res.push_back(pq.top());
        //     pq.pop();
        // }
        // //sort(res.begin(), res.end());
        // return res;
       auto comp = [x](int a, int b) {
            int diffA = abs(a - x);
            int diffB = abs(b - x); 
            if(diffA == diffB) {
                return a < b;
            }
            return diffA > diffB;
        };
        priority_queue<int, vector<int>, decltype(comp)> pq(comp);
        for(int num : arr) {
            if(num != x) {
                pq.push(num);
            }
        }
        vector<int> result;
        for(int i = 0; i < k && !pq.empty(); i++) {
            result.push_back(pq.top());
            pq.pop();
        }
        return result;
    }
};