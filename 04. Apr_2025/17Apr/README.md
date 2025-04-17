# Minimum Weight Cycle
## Difficulty: Hard
## Points: 8
### Description:
Given an undirected, weighted graph with V vertices numbered from 0 to V-1 and E edges, represented by a 2d array `edges[][]`, where `edges[i]` = `[u, v, w]` represents the edge between the nodes u and v having w edge weight.  
Your task is to find the minimum weight cycle in this graph.

### Examples:
```
Input: V = 5, edges[][] = [[0, 1, 2], [1, 2, 2], [1, 3, 1], [1, 4, 1], [0, 4, 3], [2, 3, 4]]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893268/Web/Other/blobid6_1744811506.jpg"><br>
```
Output: 6
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893268/Web/Other/blobid7_1744811516.jpg"><br>
```
Minimum-weighted cycle is  0 → 1 → 4 → 0 with a total weight of 6(2 + 1 + 3)
```
```
Input: V = 5, edges[][] = [[0, 1, 3], [1, 2, 2], [0, 4, 1], [1, 4, 2], [1, 3, 1], [3, 4, 2], [2, 3, 3]]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893268/Web/Other/blobid4_1744804067.jpg"><br>
```
Output: 5
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/893268/Web/Other/blobid8_1744811585.jpg"><br>
```
Minimum-weighted cycle is  1 → 3 → 4 → 1 with a total weight of 5(1 + 2 + 2)
```

### Constraints:
- 1 ≤ V ≤ 100
- 1 ≤ E = `edges.size()` ≤ 10<sup>3 </sup>
- 1 ≤ edges[i][j] ≤ 100