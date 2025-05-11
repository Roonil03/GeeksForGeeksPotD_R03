class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        vector<int> prefix(n+1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + arr[i - 1];
        }
        priority_queue<int, vector<int>, greater<int>> h;
        for (int start = 0; start < n; start++) {
            for (int end = start + 1; end <= n; end++) {
                int sum = prefix[end] - prefix[start];
                if (h.size() < k) {
                    h.push(sum);
                } else if (sum > h.top()) {
                    h.pop();
                    h.push(sum);
                }
            }
        }
        return h.top();
    }
};