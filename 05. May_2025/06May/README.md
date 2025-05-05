# Left View of Binary Tree
## Difficulty: Easy
## Points: 2
### Description:
You are given the root of a binary tree. Your task is to return the left view of the binary tree. The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.

If the tree is empty, return an empty list.

### Examples:
```
Input: root[] = [1, 2, 3, 4, 5, N, N]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid0_1731456264.png"><br>
```
Output: [1, 2, 4]
Explanation: From the left side of the tree, only the nodes 1, 2, and 4 are visible.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid1_1731456288.png"><br>
```
Input: root[] = [1, 2, 3, N, N, 4, N, N, 5, N, N]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid2_1731456332.png"><br>
```
Output: [1, 2, 4, 5]
Explanation: From the left side of the tree, the nodes 1, 2, 4, and 5 are visible.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876845/Web/Other/blobid3_1731456373.png"><br>
```
Input: root[] = [N]
Output: []
```

### Constraints:
- 0 <= number of nodes <= 10<sup>6</sup>
- 0 <= `node -> data` <= 10<sup>5</sup>