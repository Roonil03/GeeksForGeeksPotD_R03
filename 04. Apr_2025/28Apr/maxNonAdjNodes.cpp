// User function Template for C++

// Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
    public:
      // Function to return the maximum sum of non-adjacent nodes.
      int getMaxSum(Node *root) {
          // code here
          unordered_map<Node*, pair<int, int>> dp;
          return helper(root, dp);
      }
      
      int helper(Node* root, unordered_map<Node*, pair<int, int>>& dp){
          if (!root) {
              return 0;
          }
          if (dp.find(root) != dp.end()) {
              return max(dp[root].first, dp[root].second);
          }
          int includeNode = root->data;
          if (root->left) {
              includeNode += helper(root->left->left, dp) + helper(root->left->right, dp);
          }
          if (root->right) {
              includeNode += helper(root->right->left, dp) + helper(root->right->right, dp);
          }
          int excludeNode = helper(root->left, dp) + helper(root->right, dp);
          dp[root] = {includeNode, excludeNode};
          return max(includeNode, excludeNode);
      }
  };