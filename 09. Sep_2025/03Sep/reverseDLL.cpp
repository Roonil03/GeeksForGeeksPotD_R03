/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* s = head, *e = head;
        int n {1};
        while(e->next){
            e = e->next;
            n++;
        }
        for(int i {0}; i < n / 2; i++){
            swap(s->data, e->data);
            s = s->next;
            e = e->prev;
        }
        return head;
    }
};