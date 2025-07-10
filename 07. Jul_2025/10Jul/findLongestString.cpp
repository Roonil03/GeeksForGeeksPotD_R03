struct TrieNode{
    TrieNode* child[26]{};
    bool end = false;
};

class Trie{
    TrieNode* root;
public:   
    Trie(): root(new TrieNode){}
    
    void insert(string& s){
        TrieNode* node = root;
        for (char c: s){
            int id = c - 'a';
            if(!node->child[id]){
                node->child[id] = new TrieNode{};
            }
            node = node->child[id];
        }
        node->end = true;
    }
    
    bool allPre(string& s) const{
        TrieNode* node = root;
        for (char c : s){
            int id = c - 'a';
            node = node->child[id];
            if(!node || !node->end){
                return false;
            }
        }
        return true;
    }
};

class Solution {
  public:
    string longestString(vector<string> &arr) {
        // code here
        Trie  t;
        for(auto& w : arr){
            t.insert(w);
        }
        string res;
        for(auto& w : arr){
            if(t.allPre(w)){
                if(w.size() > res.size() || (w.size() == res.size() && w < res)){
                    res = w;
                }
            }
        }
        return res;
    }
};