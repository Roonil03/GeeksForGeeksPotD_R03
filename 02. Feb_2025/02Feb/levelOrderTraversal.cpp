class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        vector<vector<int>> res;
        if (root == nullptr){
            return res;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> cv;
            for (int i= 0 ; i<size; i++){
                Node* cur = q.front();
                q.pop();
                cv.push_back(cur->data);
                if (cur->left){
                    q.push(cur->left);
                }
                if (cur->right){
                    q.push(cur->right);
                }
            }
            res.push_back(cv);
        }
        return res;
    }
};