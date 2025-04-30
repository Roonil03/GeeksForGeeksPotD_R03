/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
    public:
      // Function to find the length of a loop in the linked list.
      int countNodesinLoop(Node *head) {
          // Code here
          if (!head){
              return 0;
          }
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