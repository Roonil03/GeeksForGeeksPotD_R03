# BST with Dead End
## Difficulty: Medium
## Points: 4
### Description:
You are given a Binary Search Tree (BST) containing unique positive integers greater than 0.

Your task is to determine whether the BST contains a dead end.

Note: A dead end is a leaf node in the BST such that no new node can be inserted in the BST at or below this node while maintaining the BST property and the constraint that all node values must be > 0.

### Examples:
```
Input: root[] = [8, 5, 9, 2, 7, N, N, 1]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700425/Web/Other/blobid1_1748007119.webp"><br>
```
Output: true
Explanation: Node 1 is a Dead End in the given BST.
```
```
Input: root[] = [8, 7, 10, 2, N, 9, 13]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700425/Web/Other/blobid3_1748007366.webp"><br>
```
Output: true
Explanation: Node 9 is a Dead End in the given BST.
```

### Constraints:
- 1 ≤ number of nodes ≤ 3000
- 1 ≤ `node->data` ≤ 10<sup>5</sup>