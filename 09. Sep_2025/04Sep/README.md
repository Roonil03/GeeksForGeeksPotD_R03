# Linked List Group Reverse
## Difficulty: Hard
## Points: 8
### Description:
You are given the head of a Singly linked list. You have to reverse every k node in the linked list and return the head of the modified list.  
Note: If the number of nodes is not a multiple of k then the left-out nodes at the end, should be considered as a group and must be reversed.

### Examples:
```
Input: k = 2,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908192/Web/Other/blobid0_1756125226.webp"><br>
```
Output: 2 -> 1 -> 4 -> 3 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 2.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908192/Web/Other/blobid1_1756125284.webp"><br>
```
Input: k = 4,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908192/Web/Other/blobid2_1756125400.webp"><br>
```
Output: 4 -> 3 -> 2 -> 1 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 4.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/908192/Web/Other/blobid3_1756125453.webp"><br>

### Constraints:
- 1 ≤ size of linked list ≤ 10<sup>5</sup>
- 0 ≤ `node->data` ≤ 10<sup>6</sup>
- 1 ≤ `k` ≤ size of linked list 
