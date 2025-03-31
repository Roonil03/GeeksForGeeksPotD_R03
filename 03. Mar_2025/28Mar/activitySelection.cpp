class Solution {
    public:
      int activitySelection(vector<int> &start, vector<int> &finish) {
          // code here
          int n {start.size()};
          vector<pair<int, int>> act;
          for (int i {0}; i < n; i++){
              act.push_back({finish[i], start[i]});
          }
          sort(act.begin(), act.end());
          int maxi = 1;
          int activity = 1;
          int s = -1, e = -1;
          for (int i = 0; i < n; i++) {
              int first = act[i].second, second = act[i].first;
              if (s == -1 && e == -1) {
                  s = first, e = second;
              } else if (first > e) {
                  activity++;
                  maxi = max(maxi, activity);
                  s = first, e = second;
              } else if (first <= e) {
                  s = max(s, first), e = min(e, second);
              }
          }
          
          return maxi;
      }
  };