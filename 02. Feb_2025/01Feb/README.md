# Word Search
## Difficulty: Medium
## Points: 4
### Description:
You are given a two-dimensional `mat[][]` of size `n*m` containing English alphabets and a string word. Check if the word exists on the mat. The word can be constructed by using letters from adjacent cells, either horizontally or vertically. The same cell cannot be used more than once.

### Examples :
```
Input: mat[][] = [['T', 'E', 'E'], ['S', 'G', 'K'], ['T', 'E', 'L']], word = "GEEK"
Output: true
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/886266/Web/Other/blobid4_1737981964.png"><br>
```
The letter cells which are used to construct the "GEEK" are colored.
```
```
Input: mat[][] = [['T', 'E', 'U'], ['S', 'G', 'K'], ['T', 'E', 'L']], word = "GEEK"
Output: false
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/886266/Web/Other/blobid5_1737981964.png"><br>
```
It is impossible to construct the string word from the mat using each cell only once.
```
```
Input: mat[][] = [['A', 'B', 'A'], ['B', 'A', 'B']], word = "AB"
Output: true
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/886266/Web/Other/blobid6_1737981964.png"><br>
```
There are multiple ways to construct the word "AB".
```

### Constraints:
- 1 ≤` n, m` ≤ 100
- 1 ≤ L ≤ n*m
