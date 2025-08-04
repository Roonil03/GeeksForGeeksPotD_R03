# Maximum sum Rectangle
## Difficulty: Hard
## Points: 8
### Description:
Given a 2D matrix `mat[][]` with dimensions n×m. Find the maximum possible sum of any submatrix within the given matrix.

### Examples:
```
Input: mat[][] = [[1, 2, -1, -4, -20], [-8, -3, 4, 2, 1], [3, 8, 10, 1, 3], [-4, -1, 1, 7, -6]]
Output: 29
Explanation: The matrix is as follows and the green rectangle denotes the maximum sum rectangle which is equal to 29.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/899247/Web/Other/blobid0_1751695089.jpg"><br>
```
Input: mat[][] = [[-1, -2], [-3, -4]]
Output: -1
Explanation: Taking only the first cell is the optimal choice.
```

### Constraints:
- 1 ≤ `n`, `m` ≤ 300
- -1000 ≤ `mat[i][j]` ≤ 1000