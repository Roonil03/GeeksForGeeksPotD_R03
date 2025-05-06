# Root to Leaf Paths
## Difficulty: Medium
## Points: 4
### Description:
Given a Binary Tree, you need to find all the possible paths from the root node to all the leaf nodes of the binary tree.

Note: The paths should be returned such that paths from the left subtree of any node are listed first, followed by paths from the right subtree.

### Examples:
```
Input: root[] = [1, 2, 3, 4, 5, N, N]
```
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241007105251989873/ex-3.webp"><br>
```
Output: [[1, 2, 4], [1, 2, 5], [1, 3]]
Explanation: All the possible paths from root node to leaf nodes are: 1 -> 2 -> 4, 1 -> 2 -> 5 and 1 -> 3
```
```
Input: root[] = [1, 2, 3]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700553/Web/Other/blobid0_1745821559.jpg"><br>
```
Output: [[1, 2], [1, 3]] 
Explanation: All the possible paths from root node to leaf nodes are: 1 -> 2 and 1 -> 3
```
```
Input: root[] = [10, 20, 30, 40, 60, N, N]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700553/Web/Other/blobid1_1745821586.jpg"><br>
```
Output: [[10, 20, 40], [10, 20, 60], [10, 30]]
Explanation: All the possible paths from root node to leaf nodes are: 10 -> 20 -> 40, 10 -> 20 -> 60 and 10 -> 30
```

### Constraints:
- 1 <= number of nodes <= 10<sup>4</sup>
- 1 <= `node->data` <= 10<sup>4</sup>