class Solution {
public:
    Node* cloneLinkedList(Node* h) {
        if (h == nullptr)
            return h;

        Node* t = h;
        while (t != nullptr) {
            Node* n = new Node(t->data);
            n->next = t->next;
            t->next = n;
            t = n->next;
        }

        t = h;
        while (t != nullptr) {
            t->next->random = (t->random != nullptr) ? t->random->next : nullptr;
            t = t->next->next;
        }

        t = h;
        Node* h2 = h->next;
        while (t != nullptr) {
            Node* n = t->next;
            t->next = n->next;
            n->next = (n->next != nullptr) ? n->next->next : nullptr;
            t = t->next;
        }
        return h2;
    }
};
