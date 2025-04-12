class Solution {
    public:
      vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                    int newColor) {
          // Code here
          int old {image[sr][sc]};
          if (old  != newColor){
              helper(image, sr, sc, newColor, old);
          }
          return image;
      }
      
      void helper(vector<vector<int>>& image, int sr, int sc, int newColor, int old){
          if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != old ||image[sr][sc] == newColor) {
              return;
          }
          image[sr][sc] = newColor;
          helper(image, sr - 1, sc, newColor, old);
          helper(image, sr + 1, sc, newColor, old);
          helper(image, sr, sc + 1, newColor, old);
          helper(image, sr, sc - 1, newColor, old);
      }
  };