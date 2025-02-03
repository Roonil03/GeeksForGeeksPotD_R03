
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) {
        // code here
        int res = 0;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()){
            int size = q.size();
            res++;
            for (int i= 0 ; i<size; i++){
                Node* cur = q.front();
                q.pop();
                if (cur->left){
                    q.push(cur->left);
                }
                if (cur->right){
                    q.push(cur->right);
                }
            }
        }
        return res-1;
    }
};