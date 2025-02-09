/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
    public:
      // code here
      bool isLeaf(Node* node) {
          return !node->left && !node->right;
      }
  
      void addLeftBoundary(Node* node, vector<int>& res) {
          Node* cur = node->left;
          while (cur) {
              if (!isLeaf(cur)) res.push_back(cur->data);
              if (cur->left) cur = cur->left;
              else cur = cur->right;
          }
      }
  
      void addLeaves(Node* node, vector<int>& res) {
          if (isLeaf(node)) {
              res.push_back(node->data);
              return;
          }
          if (node->left) addLeaves(node->left, res);
          if (node->right) addLeaves(node->right, res);
      }
  
      void addRightBoundary(Node* node, vector<int>& res) {
          Node* cur = node->right;
          stack<int> s;
          while (cur) {
              if (!isLeaf(cur)) s.push(cur->data);
              if (cur->right) cur = cur->right;
              else cur = cur->left;
          }
          while (!s.empty()) {
              res.push_back(s.top());
              s.pop();
          }
      }
  
      vector<int> boundaryTraversal(Node *root) {
          vector<int> res;
          if (!root) return res;
          if (!isLeaf(root)) res.push_back(root->data);
  
          addLeftBoundary(root, res);
          addLeaves(root, res);
          addRightBoundary(root, res);
  
          return res;
      }
  };