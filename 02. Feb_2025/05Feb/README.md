# Mirror Tree
## Diffculty: Easy
## Points: 2
### Description:
Given a binary tree, convert the binary tree to its Mirror tree.

Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes interchanged.   

### Examples:
```
Input: root[] = [1, 2, 3, N, N, 4]
Output: [1, 3, 2, N, 4]
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700155/Web/Other/blobid0_1736926809.png"><br>
```
In the inverted tree, every non-leaf node has its left and right child interchanged.
```
```
Input: root[] = [1, 2, 3, 4, 5]
Output: [1, 3, 2, N, N, 5, 4]
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700155/Web/Other/blobid1_1736926809.png"><br>
```
In the inverted tree, every non-leaf node has its left and right child interchanged.
```

### Constraints:
- 1 ≤ number of nodes ≤ 10^5
- 1 ≤ `node->data` ≤ 10^5