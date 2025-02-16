class Solution {
    public:
      // Function to check whether a Binary Tree is BST or not.
      bool isBSThelper(Node*root,int min,int max)
      {
          if(root==NULL)
          {
              return true;
          }
          
          if(root->data<min || root->data>max)
          {
              return false;
          }
          
          bool isleftok=isBSThelper(root->left,min,root->data-1);
          bool isrightok=isBSThelper(root->right,root->data,max);
          
          return isleftok&&isrightok;
      }
      bool isBST(Node* root) {
          // Your code here
          return isBSThelper(root,INT_MIN,INT_MAX);
      }
  };