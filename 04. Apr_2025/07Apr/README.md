# Directed Graph Cycle
## Difficulty: Medium
## Points: 4
### Description:
Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.  
The graph is represented as a 2D vector `edges[][]`, where each entry `edges[i]` = `[u, v]` denotes an edge from verticex u to v.

### Examples:
```
Input: V = 4, edges[][] = [[0, 1], [1, 2], [2, 3], [3, 3]]
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700218/Web/Other/9a013355-2510-4ab0-b554-1a2b9f6cb44f_1685086462.png"><br>
```
Output: true
Explanation: 3 -> 3 is a cycle
```
```
Input: V = 3, edges[][] = [[0, 1], [1, 2]]
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700218/Web/Other/b1096e14-7c18-47d8-a4e9-8dd42b2e466f_1685086462.png"><br>
```
Output: false
Explanation: no cycle in the graph
```

### Constraints:
- 1 ≤ V, E ≤ 10<sup>5</sup>