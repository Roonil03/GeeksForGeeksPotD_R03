# Level Order in spiral form
## Difficulty: Easy
## Points: 2
### Description:
Given a binary tree and the task is to find the spiral order traversal of the tree and return the list containing the elements.

**Spiral order Traversal mean:** Starting from level 0 for root node, for all the even levels we print the node's value from right to left and for all the odd levels we print the node's value from left to right.  
For below tree, function should return `[1, 2, 3, 4, 5, 6, 7]`
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700201/Web/Other/blobid0_1746530348.webp"><br>

### Examples:
```
Input: root = [1, 3, 2]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700201/Web/Other/blobid2_1746530526.webp"><br>
```
Output: [1, 3, 2]
Explanation: Start with root (1), print level 0 (right to left), then level 1 (left to right).
```
```
Input: root = [10, 20, 30, 40, 60]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700201/Web/Other/blobid3_1746530612.webp"><br>
```
Output: [10, 20, 30, 60, 40]
Explanation: Start with root (10), print level 0 (right to left), level 1 (left to right), and continue alternating.
```
```
Input: root = [1, 2, N, 4]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700201/Web/Other/blobid0_1746530910.webp"><br>
```
Output: [1, 2, 4]
Explanation: Start with root (1), then level 1 (left to right), then level 2 (right to left).
```

### Constraints:
- 1 <= `number of nodes` <= 10<sup>5</sup>
- 0 <= `node->data` <= 10<sup>5</sup>