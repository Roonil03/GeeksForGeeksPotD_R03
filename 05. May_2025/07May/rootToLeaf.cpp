/*

Definition for Binary Tree Node
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
      vector<vector<int>> Paths(Node* root) {
          // code here
          vector<vector<int>>res;
          vector<int> cur;
          helper(root, cur, res);
          return res;
      }
      
      void helper(Node* root, vector<int>& cur, vector<vector<int>>& res){
          if(!root){
              return;
          }
          cur.push_back(root->data);
          if(!root->left && !root->right){
              res.push_back(cur);
          } else{
              helper(root->left, cur, res);
              helper(root->right, cur, res);
          }
          cur.pop_back();
      }
  };