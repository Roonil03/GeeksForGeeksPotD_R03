# Solve the Sudoku
## Difficulty: Hard
## Points: 8
### Description:
Given an incomplete Sudoku configuration in terms of a 9x9  2-D interger square matrix, `mat[][]`, the task is to solve the Sudoku. It is guaranteed that the input Sudoku will have exactly one solution.

A sudoku solution must satisfy all of the following rules:
- Each of the digits 1-9 must occur exactly once in each row.
- Each of the digits 1-9 must occur exactly once in each column.
- Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

Note: Zeros represent blanks to be filled with numbers 1-9, while non-zero cells are fixed and cannot be changed.

### Examples:
```
Input: mat[][] = 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701375/Web/Other/blobid0_1738306620.png"><br>
```
Output:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701375/Web/Other/blobid0_1738306722.png"><br>
```
Explanation: Each row, column and 3 x 3 box of the output matrix contains unique numbers.
```

```
Input: mat[][] = 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/886267/Web/Other/blobid1_1738136756.png"><br>
```
Output:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/701375/Web/Other/blobid0_1738306722.png"><br>
```
Explanation: Each row, column and 3 x 3 box of the output matrix contains unique numbers.
```

#### Constraints:
- `mat.size()` = 9
- `mat[i].size()` = 9
- 0 ≤ `mat[i][j]` ≤ 9

