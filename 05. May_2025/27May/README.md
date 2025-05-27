# Print leaf nodes from preorder traversal of BST
## Difficulty: Medium
## Points: 4
### Description:
Given a preorder traversal of a BST, find the leaf nodes of the tree without building the tree.

### Examples:
```
Input: preorder[] = [5, 2, 10]
Output: [2, 10]
Explaination: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895564/Web/Other/blobid0_1747480179.jpg"><br>
```
2 and 10 are the leaf nodes as shown in the figure.
```
```
Input: preorder[] = [4, 2, 1, 3, 6, 5]
Output: [1, 3, 5]
Explaination: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895564/Web/Other/blobid1_1747480193.jpg"><br>
```
1, 3 and 5 are the leaf nodes as shown in the figure.
```
```
Input: preorder[] = [8, 2, 5, 10, 12]
Output: [5, 12]
Explaination: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895564/Web/Other/blobid2_1747480202.jpg"><br>
```
5 and 12 are the leaf nodes as shown in the figure.
```

### Constraints:
- 1 ≤ `preorder.size()` ≤ 10<sup>3</sup>
- 1 ≤ `preorder[i]` ≤ 10<sup>3</sup>