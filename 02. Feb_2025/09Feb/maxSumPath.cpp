// User Fuction template for C++
/*
// Tree Node
class Node {
public:
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
      // Function to return maximum path sum from any node in a tree.
      int findMaxSum(Node *root) {
          // code here
          int res = INT_MIN;
          help(root, res);
          return res;
      }
    private:
      int help(Node* root, int& res){
          if(root == nullptr){
              return 0;
          }
          int left = max(0, help(root->left, res));
          int right = max(0, help(root->right, res));
          int cur = root->data + left + right;
          res = max(res, cur);
          return root->data + max(left, right);
      }
  };