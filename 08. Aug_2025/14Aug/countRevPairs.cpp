class Solution {
  public:
    int countRevPairs(vector<int> &arr) {
        // Code here
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
    
    int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        int count {0};
        int j = mid + 1;
        for (int i = left; i <= mid; i++) {
            while (j <= right && arr[i] > 2LL * arr[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        vector<int> temp(right - left + 1);
        int i = left, k {0};
        j = mid + 1;
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        while (j <= right) {
            temp[k++] = arr[j++];
        }
        for (int i = left; i <= right; i++) {
            arr[i] = temp[i - left];
        }
        return count;
    }
    
    int mergeSortAndCount(vector<int>& arr, int left, int right) {
        if (left >= right) {
            return 0;
        }
        int mid = left + (right - left) / 2;
        int count {0};
        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
        return count;
    }
};