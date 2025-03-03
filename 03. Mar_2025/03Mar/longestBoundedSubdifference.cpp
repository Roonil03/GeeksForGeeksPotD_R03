class Solution {
    public:
      vector<int> longestSubarray(vector<int>& arr, int x) {
          // code here
           int n = arr.size();
          deque<int> maxDeque, minDeque;
          int left = 0, right = 0;
          int maxLength = 0, startIdx = 0;
          while (right < n) {
              while (!maxDeque.empty() && arr[maxDeque.back()] <= arr[right]) {
                  maxDeque.pop_back();
              }
              while (!minDeque.empty() && arr[minDeque.back()] >= arr[right]) {
                  minDeque.pop_back();
              }
      
              maxDeque.push_back(right);
              minDeque.push_back(right);
              while (arr[maxDeque.front()] - arr[minDeque.front()] > x) {
                  left++;
                  if (maxDeque.front() < left) {
                      maxDeque.pop_front();
                  }
                  if (minDeque.front() < left) {
                      minDeque.pop_front();
                  }
              }
      
              if (right - left + 1 > maxLength) {
                  maxLength = right - left + 1;
                  startIdx = left;
              }
      
              right++;
          }
          return vector<int>(arr.begin() + startIdx, arr.begin() + startIdx + maxLength);
      }
  };
  