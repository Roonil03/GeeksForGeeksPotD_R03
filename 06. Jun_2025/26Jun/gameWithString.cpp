class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        priority_queue<int>pq;
        for(auto& p : freq){
            pq.push(p.second);
        }
        while(k-- && !pq.empty()){
            int f = pq.top();
            pq.pop();
            if(f > 1){
                pq.push(f - 1);
            }
        }
        int res {0};
        while(!pq.empty()){
            int f = pq.top();
            pq.pop();
            res += f * f;
        }
        return res;
    }
};