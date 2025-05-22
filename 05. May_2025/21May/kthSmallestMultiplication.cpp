class Solution {
  public:
    int kthSmallest(int m, int n, int k) {
        // code here
        int left = 1, right = m * n, ans = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (countLessEqual(m, n, mid) >= k) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
    
    int countLessEqual(int m, int n, int x) {
        int count = 0;
        for (int i = 1; i <= m; ++i) {
            count += min(n, x / i);
        }
        return count;
    }
};