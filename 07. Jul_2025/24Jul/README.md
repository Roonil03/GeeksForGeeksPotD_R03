# Last Moment Before All Ants Fall Out
## Difficulty: Medium
## Points: 4
### Description:
We have a wooden plank of length n units. Some ants are walking on the plank, each ant moves with a speed of 1 unit per second, with some moving left and others right.  
When two ants moving in two different directions meet at some point, they change their directions and continue moving again. Assume changing directions does not take any additional time. When an ant reaches one end of the plank at a time t, it falls out of the plank immediately.

Given an integer n and two integer arrays `left[]` and `right[]`, the positions of the ants moving to the left and the right, return the time when the last ant(s) fall out of the plank.

### Examples:
```
Input: n = 4, left[] = [2], right[] = [0, 1, 3]
Output: 4
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/878151/Web/Other/blobid0_1730198301.jpg"><br>
```
Explanation: As seen in the above image, the last ant falls off the plank at t = 4.
```
```
Input:  n = 4, left[] = [], right[] = [0, 1, 2, 3, 4]
Output: 4
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/878151/Web/Other/blobid0_1730198642.jpg"><br>
```
Explanation: All ants are going to the right, the ant at index 0 needs 4 seconds to fall.
```
```
Input: n = 3, left[] = [0], right[] = [3]
Output: 0
Explanation: The ants will fall off the plank as they are already on the end of the plank.
```

### Constraints:
- 1 ≤ n ≤ 10<sup>5</sup>
- 0 ≤ `left.length`, `right.length` ≤ n + 1
- 0 ≤ `left[i]`, `right[i]` ≤ n
- 1 ≤ `left.length + right.length` ≤ n + 1
- All values of `left` and `right` are unique, and each value can appear only in one of the two arrays.