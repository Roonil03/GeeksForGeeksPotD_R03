/*Complete the function below

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
      // Return the Kth smallest element in the given BST
      int kthSmallest(Node *root, int k) {
          // add code here.
          int c = 0;
          int res = -1;
          Util(root, k, c, res);
          return res;
      }
      void Util(Node* root, int k, int& c, int& res){
          if (root == nullptr){
              return;
          }
          Util(root->left, k, c, res);
          c++;
          if (c == k){
              res = root->data;
              return;
          }
          Util(root->right, k,c, res);
      }
  };