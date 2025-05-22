# Kth Smallest Number in Multiplication Table
## Difficulty: Hard
## Points: 8
### Description:
Given three integers m, n and k. Consider a grid of m * n, where `mat[i][j]` = `i * j` (1 based index). The task is to return the kth smallest element in the m * n multiplication table.

### Examples:
```
Input: m = 3, n = 3, k = 5
Output: 3
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/multtable1-grid-1637617528.jpg"><br>
```
The 5th smallest element is 3. 
```
```
Input: m = 2, n = 3, k = 6
Output: 6 
Explanation: [1, 2, 3][2, 4, 6]. The 6th smallest element is 6.
```

### Constraints:
- 1 <= `m, n` <= 3 * 10<sup>4</sup>
- 1 <= k <= m * n

