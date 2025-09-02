/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        Node* c = head;
        for(int i {1}; i < k; i++){
            if(!c){
                return head;
            }
            c = c->next;
        }
        if(!c){
            return head;
        }
        Node* s = head, *f = c;
        while(f->next){
            s = s->next;
            f = f->next;
        }
        swap(c->data, s->data);
        return head;
    }
};