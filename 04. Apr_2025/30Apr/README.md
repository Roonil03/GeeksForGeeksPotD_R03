# Find length of Loop
## Difficulty: Easy
## Points: 2
### Description:
Given the head of a linked list, determine whether the list contains a loop. If a loop is present, return the number of nodes in the loop, otherwise return 0.

Note: 'c' is the position of the node which is the next pointer of the last node of the linkedlist. If c is 0, then there is no loop.

### Examples:
```
Input: head: 1 → 2 → 3 → 4 → 5, c = 2
Output: 4
Explanation: There exists a loop in the linked list and the length of the loop is 4.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893387/Web/Other/blobid0_1745983361.jpg"><br>
```
Input: head: 25 → 14 → 19 → 33 → 10 → 21 → 39 → 90 → 58 → 45, c = 4
Output: 7
Explanation: The loop is from 33 to 45. So length of loop is 33 → 10 → 21 → 39 → 90 → 58 → 45 = 7.
The number 33 is connected to the last node of the linkedlist to form the loop because according to the input the 4th node from the beginning(1 based indexing) 
will be connected to the last node in the LinkedList.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893387/Web/Other/blobid0_1745659828.jpg"><br>
```
Input: head: 0 → 1 → 2 → 3, c = 0
Output: 0
Explanation: There is no loop.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893387/Web/Other/blobid1_1745662178.jpg"><br>

### Constraints:
- 1 ≤ no. of nodes ≤ 10<sup>6</sup>
- 0 ≤ `node.data` ≤ 10<sup>6</sup>
- 0 ≤ `c` ≤ `n-1`