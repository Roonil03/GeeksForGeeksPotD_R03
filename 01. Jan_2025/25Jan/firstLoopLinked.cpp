/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
public:
    Node* findFirstNode(Node* head) {
        if (!head || !head->next) {
            return NULL;
        }

        Node* s = head;
        Node* f = head;
        while (f && f->next) {
            s = s->next;
            f = f->next->next;
            if (s == f) {
                break;
            }
        }
        if (s != f) {
            return NULL;
        }
        s = head;
        while (s != f) {
            s = s->next;
            f = f->next;
        }
        return s;
    }
};