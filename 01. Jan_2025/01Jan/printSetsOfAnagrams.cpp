class Solution {
public:
    vector<vector<string>> anagrams(vector<string> &arr) {
        unordered_map<string, vector<string>> map;
        for (string str : arr) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(str);
        }
        vector<vector<string>> res;
        for (auto &group : map) {
            res.push_back(group.second);
        }        
        return res;
    }
};