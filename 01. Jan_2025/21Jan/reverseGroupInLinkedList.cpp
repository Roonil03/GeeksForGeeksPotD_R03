class Solution {
public:
    Node* reverseKGroup(Node* head, int k) {
        if (!head || k <= 1) return head;
        Node dummy(0);
        dummy.next = head;
        Node* prevGroupEnd = &dummy;
        while (true) {
            Node* groupStart = prevGroupEnd->next;
            Node* groupEnd = prevGroupEnd;
            int i;
            for (i = 0; i < k && groupEnd; ++i) {
                groupEnd = groupEnd->next;
            }
            if (!groupEnd) {
                if (i > 0) {
                    prevGroupEnd->next = reverseList(groupStart, i);
                }
                break;
            }
            Node* nextGroupStart = groupEnd->next;
            groupEnd->next = nullptr;
            prevGroupEnd->next = reverseList(groupStart, k);
            groupStart->next = nextGroupStart;
            prevGroupEnd = groupStart;
        }
        return dummy.next;
    }
    
    Node* reverseList(Node* head, int length) {
        Node* prev = nullptr;
        Node* curr = head;
        while (length-- && curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};