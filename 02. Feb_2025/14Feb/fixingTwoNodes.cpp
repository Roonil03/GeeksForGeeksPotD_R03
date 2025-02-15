/*
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
    public:
      Node* firstMistake;
      Node* secondMistake;
      Node* prevNode;
      void correctBST(Node* root) {
          // add code here.
          firstMistake = nullptr;
          secondMistake = nullptr;
          prevNode = nullptr;
          inorderTraversal(root);
          if (firstMistake && secondMistake){
              int temp = firstMistake->data;
              firstMistake->data = secondMistake->data;
              secondMistake->data = temp;
          }
      }
    private:
      
      void inorderTraversal(Node* root) {
          if (!root) return;
          inorderTraversal(root->left);
          if (prevNode) {
              if (prevNode->data > root->data) {
                  if (!firstMistake) {
                      firstMistake = prevNode;
                  }
                  secondMistake = root;
              }
          }
          prevNode = root;
          inorderTraversal(root->right);
      }
  };
  