# Closest Neighbour in BST
## Difficulty: Easy
## Points: 2
### Description:
Given the root of a binary search tree and a number k, find the greatest number in the binary search tree that is less than or equal to k.

### Examples:
```
Input: root = [10, 7, 15, 2, 8, 11, 16], k = 14
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895571/Web/Other/blobid3_1747652897.jpg"><br>
```
Output: 11
Explanation: The greatest element in the tree which is less than or equal to 14, is 11.
```
```
Input: root = [5, 2, 12, 1, 3, 9, 21, N, N, N, N, N, N, 19, 25], k = 24
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895571/Web/Other/blobid0_1747652607.jpg"><br>
```
Output: 21
Explanation: The greatest element in the tree which is less than or equal to 24, is 21. 
```
```
Input: root = [5, 2, 12, 1, 3, 9, 21, N, N, N, N, N, N, 19, 25], k = 4
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895571/Web/Other/blobid2_1747652761.jpg"><br>
```
Output: 3
Explanation: The greatest element in the tree which is less than or equal to 4, is 3.
```

### Constraints:
- 1 <= number of nodes <= 10<sup>5</sup>
- 1 <= `node->data`, `k` <= 10<sup>5</sup>
- All nodes are unique in the BST