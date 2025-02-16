/*
struct Node { 
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
    public:
      int sumK(Node *root, int k) {
          // code here
          unordered_map<int, int> prefixSumCount;
          prefixSumCount[0] = 1;  
          return dfs(root, prefixSumCount, 0, k);
      }
  
  private:
      int dfs(Node* node, unordered_map<int, int>& prefixSumCount, int currSum, int target) {
          if (!node) return 0;
  
          currSum += node->data;
          int numPathsToCurr = prefixSumCount[currSum - target];
  
          prefixSumCount[currSum]++;
          int res = numPathsToCurr + dfs(node->left, prefixSumCount, currSum, target) + dfs(node->right, prefixSumCount, currSum, target);
          prefixSumCount[currSum]--;
  
          return res;
      }
  };