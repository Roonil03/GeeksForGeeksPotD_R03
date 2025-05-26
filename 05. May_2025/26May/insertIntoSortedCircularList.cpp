/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        // Node* nn = new Node(data);
        // if(!head){
        //     nn->next = nn;
        //     return nn;
        // }
        // Node* cur = head;   
        // while(1){
        //     if(cur->data <= data && data  <= cur->next->data){
        //         break;
        //     }
        //     if (cur->data > cur->next->data) {
        //         if (data >= cur->data || data <= cur->next->data) {
        //             break;
        //         }
        //     }
        //     cur = cur->next;
        //     if (cur == head){
        //         break;
        //     }
        // }
        // nn->next = cur->next;
        // cur->next = nn;
        // return head;
        if(head->data>data){
            Node* curr=head;
            while(curr->next!=head){
                curr=curr->next;
            }
            Node* newnode=new Node(data);
            curr->next=newnode;
            newnode->next=head;
            return newnode;
        }
        Node* curr=head;
        Node* prev=head;
        while(curr->data<=data){
            prev=curr;
            curr=curr->next;
            if(curr==head){
                break;
            }
        }
        
        Node* newnode=new Node(data);
        prev->next=newnode;
        newnode->next=curr;
        return head;
    }
};