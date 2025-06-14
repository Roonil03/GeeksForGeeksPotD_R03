/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isSymmetric(Node* root) {
        // Code here
        if(!root){
            return true;
        }
        return mirror(root->left, root->right);
    }
    
    bool mirror(Node* left, Node* right){
        if(!left && !right){
            return true;
        }
        if(!left || !right){
            return false;
        }
        return ((left->data == right->data) && mirror(left->left, right->right) && mirror(left->right, right->left));
    }
};