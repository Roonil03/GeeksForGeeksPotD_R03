class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        vector<pair<int,int>>s;
        for(int i{0}; i < color.size(); i++){
            if(!s.empty() && s.back().first == color[i] && s.back().second == radius[i]){
                s.pop_back();
            } else{
                s.push_back({color[i], radius[i]});
            }
        }
        return s.size();
    }
};