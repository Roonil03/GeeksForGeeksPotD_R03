# Swap Kth nodes from ends
## Difficulty: Medium
## Points: 4
### Description:
Given the head of a singly linked list and an integer k. Swap the kth node (1-based index) from the beginning and the kth node from the end of the linked list. Return the head of the final formed list and if it's not possible to swap the nodes return the original list.

### Examples:
```
Input: k = 1,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701070/Web/Other/blobid0_1755953423.webp"><br>
```
Output: 5 -> 2 -> 3 -> 4 -> 1
Explanation: Here k = 1, hence after swapping the 1st node from the beginning and end the new list will be 5 -> 2 -> 3 -> 4 -> 1.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701070/Web/Other/blobid1_1755953433.webp"><br>
```
Input: k = 2,
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701070/Web/Other/blobid2_1755953453.webp"><br>
```
Output: 5 -> 9 -> 8 -> 5 -> 10 -> 3
Explanation: Here k = 2, hence after swapping the 2nd node from the beginning and end the new list will be 5 -> 9 -> 8 -> 5 -> 10 -> 3.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701070/Web/Other/blobid3_1755953462.webp"><br>

### Constraints:
- 1 ≤ list size ≤ 10<sup>4</sup>
- 1 ≤ `node->data` ≤ 10<sup>6</sup>
- 1 ≤ `k` ≤ 10<sup>4</sup>