# Insert in Sorted Circular Linked List
## Difficulty: Medium
## Points: 4
### Description:
Given a sorted circular linked list, the task is to insert a new node in this circular linked list so that it remains a sorted circular linked list.

### Examples:
```
Input: head = 1->2->4, data = 2
Output: 1->2->2->4
Explanation: We can add 2 after the second node.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700127/Web/Other/blobid0_1724411599.png"><br><br>
```
Input: head = 1->4->7->9, data = 5
Output: 1->4->5->7->9
Explanation: We can add 5 after the second node.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700127/Web/Other/blobid1_1724411615.png"><br>

### Constraints:
- 2 <= number of `nodes` <= 10<sup>6</sup>
- 0 <= `node->data` <= 10<sup>6</sup>
- 0 <= `data` <= 10<sup>6</sup>
