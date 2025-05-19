# Predecessor and Successor
## Difficulty: Medium
## Points: 4
### Description:
You are given root node of the BST and an integer key. You need to find the in-order `successor` and `predecessor` of the given key. If either predecessor or successor is not found, then set it to `NULL`.

Note:- In an inorder traversal the number just smaller than the target is the predecessor and the number just greater than the target is the successor. 

### Examples:
```
Input: root[] = [8, 1, 9, N, 4, N, 10, 3, N, N, N], key = 8
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700614/Web/Other/blobid4_1746526041.webp"><br>
```
Output: 4 9
Explanation: In the given BST the inorder predecessor of 8 is 4 and inorder successor of 8 is 9.
```
```
Input: root[] = [10, 2, 11, 1, 5, N, N, N, N, 3, 6, N, 4, N, N], key = 11
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700614/Web/Other/blobid6_1746526133.webp"><br>
```
Output: 10 -1
Explanation: In given BST, the inorder predecessor of 11 is 10 whereas it does not have any inorder successor.
```
```
Input: root[] = [2, 1, 3], key = 3
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700614/Web/Other/blobid7_1746526171.webp"><br>
```
Output: 2 -1
Explanation: In given BST, the inorder predecessor of 3 is 2 whereas it does not have any inorder successor.
```

### Constraints: 
- 1 <= `no. of nodes` <= 10<sup>5</sup>
- 1 <= `node->data` <= 10<sup>6</sup>
- 1 <= `key` <= 10<sup>6</sup>