// User Function template for C++

// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
    public:
      bool isHeap(Node* tree) {
          // code here
          return isMaxHeap(tree) && isTree(tree);
      }
      
      bool isMaxHeap(Node* root){
          if (!root){
              return true;
          }
          if (root->left && root->data < root->left->data){
              return false;
          }
          if (root->right && root->data < root->right->data){
              return false;
          }
          return isHeap(root->left) && isHeap(root->right);
      }
      
      bool isTree(Node* root){
           if (!root) {
              return true;
          }
          queue<Node*> q;
          q.push(root);
          bool end = false;
          while (!q.empty()) {
              Node* node = q.front();
              q.pop();
              if (!node) {
                  end = true;
              } else {
                  if (end) {
                      return false;
                  }
                  q.push(node->left);
                  q.push(node->right);
              }
          }
          return true;
      }
  };