class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
    std::sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    int closestSum = std::numeric_limits<int>::max();
    std::vector<int> result;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (std::abs(target - sum) < std::abs(target - closestSum)) {
            closestSum = sum;
            result = {arr[left], arr[right]};
        } else if (std::abs(target - sum) == std::abs(target - closestSum)) {
            if (result.empty() || std::abs(arr[right] - arr[left]) > std::abs(result[1] - result[0])) {
                result = {arr[left], arr[right]};
            }
        }
        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return result;
    }
};