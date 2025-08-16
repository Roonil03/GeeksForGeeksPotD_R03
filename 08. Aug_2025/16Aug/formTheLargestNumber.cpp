class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        vector<string> nums;
        nums.reserve(arr.size());
        for(int n : arr){
            nums.push_back(to_string(n));
        }
        sort(nums.begin(), nums.end(), [](const string& a, const string& b){
            return a + b > b + a;
        });
        if(nums[0] == "0"){
            return "0";
        }
        string res;
        res.reserve(nums.size() * 10);
        for(string& n : nums){
            res += n;
        }
        return res;
    }
};