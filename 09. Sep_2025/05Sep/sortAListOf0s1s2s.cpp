
/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if (!head){
            return head;
        }
        int count[3] = {0, 0, 0};
        Node* c  {head};
        while(c){
            count[c->data]++;
            c = c->next;
        }
        c = head;
        int i {0};
        while(c){
            if(count[i] == 0){
                i++;
            } else{
                c->data = i;
                count[i]--;
                c = c->next;
            }
        }
        return head;
    }
};


