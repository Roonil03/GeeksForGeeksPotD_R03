/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* mergeSort(Node* head) {
        // code here
        if(!head || !head->next){
            return head;
        }
        Node* m = mid(head);
        Node* l = mergeSort(head), *r = mergeSort(m);
        return merge(l, r);
    }
    
    Node* mid(Node* head){
        if(!head){
            return head;
        }
        Node *s = head, *f = head, *p = nullptr;
        while(f && f->next){
            p = s;
            s = s->next;
            f = f->next->next;
        }
        if(p){
            p->next = nullptr;
        }
        return s;
    }
    
    Node* merge(Node* l, Node* r){
        Node x(0);
        Node* cur = &x;
        while(l && r){
            if(l->data <= r->data){
                cur->next = l;
                l = l->next;
            } else{
                cur->next = r;
                r = r->next;
            }
            cur = cur->next;
        }
        cur->next = l ? l : r;
        return x.next;
    }
};