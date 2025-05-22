/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*, Node*> parent;
        mapParents(root, parent);
        Node* start = findTarget(root, target);
        unordered_map<Node*, bool> visited;
        queue<Node*> q;
        q.push(start);
        visited[start] = true;
        int time = 0;
        while (!q.empty()) {
            int sz = q.size();
            bool burn = false;
            for (int i = 0; i < sz; ++i) {
                Node* curr = q.front(); q.pop();
                if (curr->left && !visited[curr->left]) {
                    burn = true;
                    visited[curr->left] = true;
                    q.push(curr->left);
                }
                if (curr->right && !visited[curr->right]) {
                    burn = true;
                    visited[curr->right] = true;
                    q.push(curr->right);
                }
                if (parent.count(curr) && !visited[parent[curr]]) {
                    burn = true;
                    visited[parent[curr]] = true;
                    q.push(parent[curr]);
                }
            }
            if (burn){
                time++;
            }
        }
        return time;
    }
    
    void mapParents(Node* root, unordered_map<Node*, Node*>& parent) {
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* curr = q.front(); q.pop();
            if (curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
    
    Node* findTarget(Node* root, int target) {
        if (!root){
            return nullptr;
        }
        if (root->data == target){
            return root;
        }
        Node* l = findTarget(root->left, target);
        if (l){
            return l;
        }
        return findTarget(root->right, target);
    }
};