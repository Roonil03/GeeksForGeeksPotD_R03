/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        vector<int> v;
        inorder(root, v);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<=k) return v[i];
        }
        return -1;
    }
    void inorder(Node* root, vector<int>& v){
        if(!root){
            return;
        }
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
};