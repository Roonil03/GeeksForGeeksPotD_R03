# Sort a linked list of 0s, 1s and 2s
## Difficulty: Medium
## Points: 4
### Description:
Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.

### Examples:
```
Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
```
![wa](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893386/Web/Other/blobid0_1745663585.jpg)  
```
Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893386/Web/Other/blobid1_1745663752.jpg"><br>
```
Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.
```
```
Input: head = 2 → 2 → 0 → 1
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893386/Web/Other/blobid1_1745653669.jpg"><br>
```
Output: 0 → 1 → 2 → 2
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893386/Web/Other/blobid2_1745653710.jpg"><br>
```
Explanation: After arranging all the 0s, 1s and 2s in the given format, the output will be 0 → 1 → 2 → 2.
```

### Constraints:
- 1 ≤ no. of nodes ≤ 10<sup>6</sup>
- 0 ≤ `node->data` ≤ 2