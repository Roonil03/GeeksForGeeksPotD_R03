/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
    bool isDeadEnd(Node *root) {
        // Code here
        set<int> n;
        n.insert(0);
        h1(root, n);
        return check(root, n);
    }
    
    void h1(Node* root, set<int>& n){
        if(!root){
            return;
        }
        n.insert(root->data);
        h1(root->left, n);
        h1(root->right, n);
        return;
    }
    
    bool check(Node* root, set<int>& n){
        if(!root){
            return false;
        }
        if(!root->left && !root->right){
            return n.count(root->data-1) && n.count(root->data+1);
        }
        return check(root->left, n) || check(root->right, n);
    }
};