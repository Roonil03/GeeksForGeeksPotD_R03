# Set Matrix Zeros
## Difficulty: Medium
## Points: 4
### Description:
You are given a 2D matrix `mat[][]` of size n x m. The task is to modify the matrix such that if `mat[i][j]` is 0, all the elements in the i-th row and j-th column are set to 0.

### Examples:
```
Input: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/898467/Web/Other/blobid1_1751352682.jpg"><br>
```
Output: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/898467/Web/Other/blobid3_1751352733.jpg"><br>
```
Explanation: mat[1][1] = 0, so all elements in row 1 and column 1 are updated to zeroes.
```
```
Input: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/874880/Web/Other/blobid0_1753182969.jpg"><br>
```
Output: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/874880/Web/Other/blobid1_1753183001.jpg"><br>
```
Explanation: mat[0][0] and mat[0][3] are 0s, so all elements in row 0, column 0 and column 3 are updated to zeroes.
```

### Constraints:
- 1 ≤ `n`, `m` ≤ 500
- 2<sup>31</sup> ≤ `mat[i][j]` ≤ 2<sup>31</sup> - 1