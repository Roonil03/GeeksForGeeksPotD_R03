/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int diameter(Node* root) {
        // Your code here
        int mx = 0;
        dfs(root, mx);
        return mx;
    }
    
private:
    int dfs(Node* r, int& mx) {
        if (!r){
            return 0;
        }
        int l = dfs(r->left, mx);
        int rn = dfs(r->right, mx);
        mx = max(mx, l + rn);
        return 1 + max(l, rn);
    }
};