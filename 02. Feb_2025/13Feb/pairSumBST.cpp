/*
Node is as follows
class Node {
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
      bool findTarget(Node *root, int target) {
          // your code here.
          vector<int>nodes;
          inorder(root, nodes);
          int l = 0, r = nodes.size()-1;
          while(l < r){
              int sum = nodes[l] + nodes[r];
              if (sum == target){
                  return true;
              }
              else if (sum < target){
                  l++;
              }
              else{
                  r--;
              }
          }
          return false;
      }
      
      void inorder(Node* root, vector<int> &values) {
          if (!root){
              return;
          }
          inorder(root->left, values);
          values.push_back(root->data);
          inorder(root->right, values);
      }
  };