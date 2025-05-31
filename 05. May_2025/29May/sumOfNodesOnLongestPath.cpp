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
  int maxlen,maxi;
    void helper(Node* root,int l,int sum){
        if(!root) return ;
        
        if(!root->left && !root->right){
            l++;
            sum+=root->data;
            if(l>maxlen){
                maxi=sum;
                maxlen=l;
            } else if(l==maxlen && sum>maxi) maxi=sum;
            
            return ;
        }
        
        l++;
        if(root->left) helper(root->left,l,sum+root->data);
        if(root->right) helper(root->right,l,sum+root->data);
    }
    
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        maxlen=0,maxi=0;
        int l=0;
        int sum=0;
        helper(root,l,sum);
        return maxi;
    }
};