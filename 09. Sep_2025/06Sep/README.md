# Find length of Loop
## Difficulty: Medium
## Points: 4
### Description:
Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0.

Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null, indicating there is no loop. Note that pos is not passed as a parameter.

### Examples:
```
Input: pos = 2,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/904501/Web/Other/blobid0_1756186026.webp"><br>
```
Output: 4
Explanation: There exists a loop in the linked list and the length of the loop is 4.
```
```
Input: pos = 3,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/904501/Web/Other/blobid0_1756128118.webp"><br>
```
Output: 3
Explanation: The loop is from 19 to 10. So length of loop is 19 → 33 → 10 = 3.
```
```
Input: pos = 0,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/904501/Web/Other/blobid1_1756128178.webp"><br>
``` 
Output: 0
Explanation: There is no loop.
```

### Constraints:
- 1 ≤ number of nodes ≤ 10<sup>5</sup>
- 1 ≤ `node->data` ≤ 10<sup>4</sup>
- 0 ≤ `pos` < number of nodes