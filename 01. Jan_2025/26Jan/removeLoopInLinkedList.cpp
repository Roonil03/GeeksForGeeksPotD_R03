class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        Node* fast = head, *slow = head; 
        Node* prev = 0; 
        while(fast->next && slow->next ){
            prev =fast ;
            fast = fast->next; 
            if(fast->next){
                prev = fast ;
                fast = fast->next ; 
            } 
            slow = slow->next ;
            
            if(fast==slow) break ; 
        }
        if(!fast->next) return ; 
        slow = head ; 
        while(slow!=fast){
            slow = slow->next ; 
            prev = fast ; 
            fast = fast->next ; 
        }
        if(prev)
        prev->next = NULL; 
        
    }
};