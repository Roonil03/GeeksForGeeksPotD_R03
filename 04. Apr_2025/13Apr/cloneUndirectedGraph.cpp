// User function Template for C++

// struct Node {
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };

class Solution {
    public:
      Node* cloneGraph(Node* node) {
          // code here
          if (!node){
              return nullptr;
          }
          unordered_map<Node*, Node*> m;
          return dfs(node, m);
      }
      
      Node* dfs(Node* n, unordered_map<Node*, Node*>& m){
          if(m.find(n) != m.end()){
              return m[n];
          }
          Node* cpy = new Node(n->val);
          m[n] = cpy;
          for(Node* a : n->neighbors){
              cpy->neighbors.push_back(dfs(a, m));
          }
          return cpy;
      }
  };