# Sum of nodes on the longest path
## Difficulty: Medium
## POints: 4
### Description:
Given a binary tree `root[]`, you need to find the sum of the nodes on the longest path from the root to any leaf node. If two or more paths have the same length, the path with the maximum sum of node values should be considered.

### Examples:
```
Input: root[] = [4, 2, 5, 7, 1, 2, 3, N, N, 6, N]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700680/Web/Other/blobid0_1733503356.jpg"><br>
```
Output: 13
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700680/Web/Other/blobid1_1733503411.jpg"><br>
```
The highlighted nodes (4, 2, 1, 6) above are part of the longest root to leaf path having sum = (4 + 2 + 1 + 6) = 13
```
```
Input: root[] = [1, 2, 3, 4, 5, 6, 7]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895566/Web/Other/blobid0_1747478981.jpg"><br>
```
Output: 11
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895566/Web/Other/blobid1_1747479038.jpg"><br>
```
The longest root-to-leaf path is 1 -> 3 -> 7, with sum 11.
```
```
Input: root[] = [10, 5, 15, 3, 7, N, 20, 1]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895566/Web/Other/blobid2_1747479147.jpg"><br>
```
Output: 19
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/895566/Web/Other/blobid3_1747479244.jpg"><br>
```
The longest root-to-leaf path is 10 -> 5 -> 3 -> 1 with a sum of 10 + 5 + 3 + 1 = 19.
```

### Constraints:
- 1 <= number of nodes <= 10<sup>6</sup>
- 0 <= `node->data` <= 10<sup>4</sup>