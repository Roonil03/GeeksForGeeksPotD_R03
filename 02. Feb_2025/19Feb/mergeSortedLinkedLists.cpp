/*Linked list Node structure

struct Node
{
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
      Node* mergeKLists(vector<Node*>& arr) {
          // Your code here
          auto comp = [](Node* a, Node* b){
              return a->data > b->data;
          };
          priority_queue<Node* , vector<Node*>, decltype(comp) > minHeap(comp);
          for (auto node: arr){
              if (node){
                  minHeap.push(node);
              }
          }
          Node temp(0);
          Node* tail = &temp;
          while(!minHeap.empty()){
              Node* cur = minHeap.top();
              minHeap.pop();
              tail -> next = cur;
              tail = tail->next;
              if (cur->next){
                  minHeap.push(cur->next);
              }
          }
          return temp.next;
      }
  };