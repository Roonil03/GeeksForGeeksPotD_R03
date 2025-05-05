/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

 class Solution {
    public:
      vector<int> leftView(Node *root) {
          // code here
          vector<int> res;
          if (!root){
              return res;
          }
          queue<Node*> q;
          q.push(root);
          while(!q.empty()){
              int s = q.size();
              for(int i {0}; i < s; i++){
                  Node* temp = q.front();
                  q.pop();
                  if (i == 0){
                      res.push_back(temp->data);
                  }
                  if (temp->left){
                      q.push(temp->left);
                  }
                  if (temp->right){
                      q.push(temp->right);
                  }
              }
          }
          return res;
      }
  };