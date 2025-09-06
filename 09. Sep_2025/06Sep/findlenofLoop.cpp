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
    int lengthOfLoop(Node *head) {
        // code here
        Node* s {head};
        Node* f {head};
        while(f && f->next){
            s = s->next;
            f = f->next->next;
            if (s == f){
                int res {1};
                Node* t {s};
                while(t->next != s){
                    res++;
                    t = t->next;
                }
                return res;
            }
        }
        return 0;
    }
};