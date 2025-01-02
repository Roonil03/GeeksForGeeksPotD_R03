class Solution {
public:
    int countSubarrays(vector<int>& arr, int k) {
        unordered_map<int, int> sumCount;
        int currentSum = 0;
        int count = 0;
        sumCount[0] = 1;
        for (int num : arr) {
            currentSum += num;
            if (sumCount.find(currentSum - k) != sumCount.end()) {
                count += sumCount[currentSum - k];
            }
            sumCount[currentSum]++;
        }
        return count;
    }
};