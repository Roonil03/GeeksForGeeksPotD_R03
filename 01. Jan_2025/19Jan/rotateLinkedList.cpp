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
    Node* rotate(Node* head, int k) {
        // Your code here
        Node* current = head;
        int length = 1;
        while (current->next) {
            current = current->next;
            length++;
        }
        k = k % length;
        if (k == 0) return head;
        current->next = head;
        for (int i = 0; i < k; i++) {
            current = current->next;
        }
        head = current->next;
        current->next = nullptr;
    
        return head;
    }
};