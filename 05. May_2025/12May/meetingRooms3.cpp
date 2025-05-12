class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
        sort(meetings.begin(), meetings.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++) {
            pq.push(i);
        }
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> p1;
        vector<int> roomCount(n, 0);
        for (const auto& m : meetings) {
            long long start = m[0], end = m[1];
            while (!p1.empty() && p1.top().first <= start) {
                pq.push(p1.top().second);
                p1.pop();
            }
            if (!pq.empty()) {
                int room = pq.top();
                pq.pop();
                roomCount[room]++;
                p1.push({end, room});
            } else {
                auto temp = p1.top();
                p1.pop();
                long long newEnd = temp.first + (end - start);
                roomCount[temp.second]++;
                p1.push({newEnd, temp.second});
            }
        }
        int maxMeetings = 0, res = 0;
        for (int i = 0; i < n; i++) {
            if (roomCount[i] > maxMeetings || (roomCount[i] == maxMeetings && i < res)) {
                maxMeetings = roomCount[i];
                res = i;
            }
        }

        return res;
    }
};