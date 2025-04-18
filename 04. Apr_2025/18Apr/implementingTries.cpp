// User function template for C++
class TrieNode{
    public:
     unordered_map<char, TrieNode*> child;
     bool isEnd;
     TrieNode() : isEnd(false){
     }
   };
   
   class Trie {
     public:
       TrieNode* root;
       Trie() {
           // implement Trie
           root = new TrieNode();
       }
   
       void insert(string &word) {
           // insert word into Trie
           TrieNode* cur = root;
           for(char ch : word){
               if(cur->child.find(ch) == cur->child.end()){
                   cur->child[ch] = new TrieNode();
               }
               cur = cur->child[ch];
           }
           cur->isEnd = true;
       }
   
       bool search(string &word) {
           // search word in the Trie
           TrieNode* cur = root;
           for(char ch : word){
               if(cur->child.find(ch) == cur->child.end()){
                   return false;
               }
               cur = cur->child[ch];
           }
           return cur->isEnd;
       }
   
       bool isPrefix(string &word) {
           // search prefix word in the Trie
           TrieNode* cur = root;
           for(char ch: word){
               if(cur->child.find(ch) == cur->child.end()){
                   return false;
               }
               cur = cur->child[ch];
           }
           return true;
       }
   };