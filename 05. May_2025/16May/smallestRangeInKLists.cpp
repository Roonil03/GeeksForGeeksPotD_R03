class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& arr) {
        // code here
        int k = arr.size();
        typedef tuple<int, int, int> Node;
        auto cmp = [](const Node& a, const Node& b) { return get<0>(a) > get<0>(b); };
        priority_queue<Node, vector<Node>, decltype(cmp)> minHeap(cmp);
        int current_max = INT_MIN;
        for (int i = 0; i < k; ++i) {
            minHeap.push(Node(arr[i][0], i, 0));
            if (arr[i][0] > current_max) current_max = arr[i][0];
        }
        int range_start = 0, range_end = INT_MAX;
        while (true) {
            Node top = minHeap.top();
            minHeap.pop();
            int val = get<0>(top);
            int row = get<1>(top);
            int col = get<2>(top);
            if (current_max - val < range_end - range_start) {
                range_start = val;
                range_end = current_max;
            }
            if (col + 1 == arr[row].size()) break;
            int next_val = arr[row][col + 1];
            minHeap.push(Node(next_val, row, col + 1));
            if (next_val > current_max) current_max = next_val;
        }
        return {range_start, range_end};
    }
};