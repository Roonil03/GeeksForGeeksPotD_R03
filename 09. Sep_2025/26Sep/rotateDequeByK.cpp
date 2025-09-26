class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        int n = dq.size();
        k = k % n;
        if (k == 0){
            return;
        }
        if(type == 1){
            for(int i {0}; i < k; i++){
                int el = dq.back();
                dq.pop_back();
                dq.push_front(el);
            }
        } else{
            for(int i {0}; i < k; i++){
                int el = dq.front();
                dq.pop_front();
                dq.push_back(el);
            }
        }
        return;
    }
};