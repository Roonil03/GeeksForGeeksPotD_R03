/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
    public:
      // Function to serialize a tree and return a list containing nodes of tree.
      vector<int> serialize(Node *root) {
          // Your code here
          vector<int> arr;
          shelp(root, arr);
          return arr;
      }
      
      void shelp(Node *root, vector<int>& arr){
          if (root == nullptr){
              arr.push_back(-1);
              return;
          }
          arr.push_back(root->data);
          shelp(root->left, arr);
          shelp(root->right, arr);
      }
  
      // Function to deserialize a list and construct the tree.
      Node *deSerialize(vector<int> &arr) {
          // Your code here
          int id = 0;
          return dhelp(arr, id);
      }
      
      Node* dhelp(vector<int> &arr, int &id){
          if(id >= arr.size() || arr[id] == -1){
              id++;
              return nullptr;
          }
          Node* root = new Node(arr[id++]);
          root->left = dhelp(arr, id);
          root->right = dhelp(arr, id);
          return root;
      }
  };