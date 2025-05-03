// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
    public:
      Node *primeList(Node *head) {
          // code here
          Node* c = head;
          while (c) {
              c->val = nearestPrime(c->val);
              c = c->next;
          }
          return head;
      }
      
      bool isPrime(int num){
          if (num <= 1){
              return false;
          }
          if (num <= 3){
              return true;
          }
          if (num % 2 == 0 || num % 3 == 0){
              return false;
          }
          for (int i = 5; i * i <= num; i += 6) {
              if (num % i == 0 || num % (i + 2) == 0){
                  return false;
              }
          }
          return true;
      }
      
      int nearestPrime(int num){
          if (num <= 1){
              return 2;
          }
          if (isPrime(num)){
              return num;
          }
          int l = num - 1, r = num + 1;
          while (l >= 2 && !isPrime(l)){
              l--;
          }
          while (!isPrime(r)) {
              r++;
          }
          if (num - l <= r - num) {
              return l;
          } else {
              return r;
          }
      }
  };