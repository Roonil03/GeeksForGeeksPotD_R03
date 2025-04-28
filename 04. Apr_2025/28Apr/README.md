# Maximum sum of Non-adjacent nodes
## Difficulty: Medium
## Points: 4
### Description:
Given a binary tree with a value associated with each node. Your task is to select a subset of nodes such that the sum of their values is maximized, with the condition that no two selected nodes are directly connected that is, if a node is included in the subset, neither its parent nor its children can be included.

### Examples:
```
Input: root[] = [11, 1, 2]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/880845/Web/Other/blobid0_1732598044.png"><br>
```
Output: 11
Explanation: The maximum sum is obtained by selecting the node 11.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/880845/Web/Other/blobid1_1732598102.png"><br>
```
Input: root[] = [1, 2, 3, 4, N, 5, 6]
```
![wewaew](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/880845/Web/Other/blobid2_1732598208.png)  
```
Output: 16
Explanation: The maximum sum is obtained by selecting the nodes 1, 4, 5, and 6, which are not directly connected to each other. Their total sum is 16.
```
![aweasd](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/880845/Web/Other/blobid3_1732598283.png)  

### Constraints:
- 1 ≤ no. of nodes in the tree ≤ 10<sup>4</sup>
- 1 ≤ `Node.val` ≤ 10<sup>5</sup>