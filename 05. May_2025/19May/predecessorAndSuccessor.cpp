/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre = nullptr;
        Node* suc = nullptr;
        Node* curr = root;
         while (curr) {
            if (curr->data < key) {
                pre = curr;
                curr = curr->right;
            } else if (curr->data > key) {
                suc = curr;
                curr = curr->left;
            } else {
                if (curr->left) {
                    Node* tmp = curr->left;
                    while (tmp->right){
                        tmp = tmp->right;
                    }
                    pre = tmp;
                }
                if (curr->right) {
                    Node* tmp = curr->right;
                    while (tmp->left){
                        tmp = tmp->left;
                    }
                    suc = tmp;
                }
                break;
            }
        }
        return {pre, suc};
    }
};