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
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> res;
    vector<int> inOrder(Node* root) {
        // Your code here
        help(root);
        return res;
    }
    void help(Node* root){
        if (root == nullptr){
            return;
        }
        help(root->left);
        res.push_back(root->data);
        help(root->right);
    }
};