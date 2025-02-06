// Class that contains the logic to build the binary tree
/*
Definition of the Node class
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
};
*/
class Solution {
    // Function to build the tree from given inorder and preorder traversals
private:
    int pi;
    
    int srch(vector<int>& a, int s, int e, int v) {
        for(int i = s; i <= e; i++) {
            if(a[i] == v) {
                return i;
            }
        }
        return -1;
    }
    
    Node* bt(vector<int>& in, vector<int>& pre, int st, int en) {
        if(st > en) {
            return nullptr;
        }
        
        Node* r = new Node(pre[pi++]);
        
        if(st == en) {
            return r;
        }
        
        int idx = srch(in, st, en, r->data);
        
        r->left = bt(in, pre, st, idx - 1);
        r->right = bt(in, pre, idx + 1, en);
        
        return r;
    }
    
public:
    Node* buildTree(vector<int>& inorder, vector<int>& preorder) {
        pi = 0;
        return bt(inorder, preorder, 0, inorder.size() - 1);
    }
};