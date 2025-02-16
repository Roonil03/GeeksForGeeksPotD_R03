# k-th Smallest in BST
## Difficulty: Medium
## Points: 4
### Description:
Given a BST and an integer k, the task is to find the kth smallest element in the BST. If there is no kth smallest element present then return -1.

### Examples:
```
Input: root = [2, 1, 3], k = 2
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700236/Web/Other/blobid1_1738413633.png"><br>
```
Output: 2
Explanation: 2 is the 2nd smallest element in the BST.
```
```
Input: root = [2, 1, 3], k = 5
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700236/Web/Other/blobid1_1738413633.png"><br>
```
Output: -1
Explanation: There is no 5th smallest element in the BST as the size of BST is 3.
```
```
Input: root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], k = 3
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700498/Web/Other/blobid1_1736918049.jpg"><br>
```
Output: 10
Explanation: 10 is the 3rd smallest element in the BST.
```

### Constraints:

- 1 <= number of nodes, k <= 10^5
- 1 <= `node->data` <= 10^5