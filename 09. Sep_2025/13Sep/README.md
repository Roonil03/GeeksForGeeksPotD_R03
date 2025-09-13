# Minimum Cost to cut a board into squares
## Difficulty: Medium
## Points: 4
### Description:
Given a board of dimensions n × m that needs to be cut into n*m squares. The cost of making a cut along a horizontal or vertical edge is provided in two arrays:

- `x[]:` Cutting costs along the vertical edges (length-wise).
- `y[]:` Cutting costs along the horizontal edges (width-wise).

Find the minimum total cost required to cut the board into squares optimally.

### Examples:
```
Input: n = 4, m = 6, x[] = [2, 1, 3, 1, 4], y[] = [4, 1, 2]
Output: 42
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/board-1646284249.png"><br>
```
For above board optimal way to cut into square is: 
1. Pick 4 (from x) -> vertical cut, Cost = 4 × horizontal segments = 4,
   Vertical segments = 2, Total = 4.
2. Pick 4 (from y) -> horizontal cut, Cost = 4 × vertical segments = 8,
   Horizontal segments = 2, Total = 12.
3. Pick 3 (from x) -> vertical cut, Cost = 3 × horizontal segments = 6,
   Vertical segments = 3, Total = 18. 
4. Pick 2 (from x) -> vertical cut, Cost = 2 × horizontal segments = 4,
   Vertical segments = 4, Total = 22.
5. Pick 2 (from y) -> horizontal cut, Cost = 2 × vertical segments = 8,
   Horizontal segments = 3, Total = 30.
6. Pick 1 (from x) -> vertical cut, Cost = 1 × horizontal segments = 3,
   Vertical segments = 5, Total = 33.
7. Pick 1 (from x) -> vertical cut, Cost = 1 × horizontal segments = 3,
   Vertical segments = 6, Total = 36.
8. Pick 1 (from y) -> horizontal cut, Cost = 1 × vertical segments = 6,
   Horizontal segments = 4, Total = 42.
```
```
Input: n = 4, m = 4, x[] = [1, 1, 1], y[] = [1, 1, 1]
Output: 15
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/board-1646284249-1661926688.png"><br>
```
For above board optimal way to cut into square is: 
1. Pick 1 (from y) -> horizontal cut, Cost = 1 × vertical segments = 1,
   Horizontal segments = 2, Total = 1.
2. Pick 1 (from y) -> horizontal cut, Cost = 1 × vertical segments = 1,
   Horizontal segments = 3, Total = 2.
3. Pick 1 (from y) -> horizontal cut, Cost = 1 × vertical segments = 1,
   Horizontal segments = 4, Total = 3.
4. Pick 1 (from x) -> vertical cut, Cost = 1 × horizontal segments = 4,
   Vertical segments = 2, Total = 7.
5. Pick 1 (from x) -> vertical cut, Cost = 1 × horizontal segments = 4,
   Vertical segments = 3, Total = 11.
6. Pick 1 (from x) -> vertical cut, Cost = 1 × horizontal segments = 4,
   Vertical segments = 4, Total = 15.
```
### Constraints:
- 2 ≤ `n`, `m` ≤ 10<sup>3</sup>
- 1 ≤ `x[i]`, `y[j]` ≤10<sup>3</sup>