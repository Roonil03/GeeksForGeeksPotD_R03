class Solution {
    public:
      vector<double> getMedian(vector<int> &arr) {
          // code here
          vector<double> res;
          maxHeap = priority_queue<int>();
          minHeap = priority_queue<int, std::vector<int>, std::greater<int>>();
          for (int num : arr) {
              addNum(num);
              res.push_back(getMedian());
          }
          return res;
      }
    private:
      priority_queue<int> maxHeap;
      priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
      void addNum(int num) {
          if (maxHeap.empty() || num < maxHeap.top()) {
              maxHeap.push(num);
          } else {
              minHeap.push(num);
          }
          if (maxHeap.size() > minHeap.size() + 1) {
              minHeap.push(maxHeap.top());
              maxHeap.pop();
          } else if (minHeap.size() > maxHeap.size()) {
              maxHeap.push(minHeap.top());
              minHeap.pop();
          }
      }
      
      double getMedian() {
          if (maxHeap.size() == minHeap.size()) {
              return (maxHeap.top() + minHeap.top()) / 2.0;
          } else {
              return maxHeap.top();
          }
      }
  };