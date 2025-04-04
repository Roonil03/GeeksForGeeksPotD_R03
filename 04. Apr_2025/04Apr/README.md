# Undirected Graph Cycle
## Difficulty: Medium
## Points: 4
### Description:
Given an undirected graph with V vertices and E edges, represented as a 2D vector `edges[][]`, where each entry `edges[i]` = `[u, v]` denotes an edge between vertices u and v, determine whether the graph contains a cycle or not.

### Examples:
```
Input: V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
Output: true
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/891735/Web/Other/blobid1_1743510240.jpg"><br>
```
1 -> 2 -> 0 -> 1 is a cycle.
```
```
Input: V = 4, E = 3, edges[][] = [[0, 1], [1, 2], [2, 3]]
Output: false
Explanation: 
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/891735/Web/Other/blobid2_1743510254.jpg"><br>
```
No cycle in the graph.
```
### Constraints:
- 1 ≤ V ≤ 10<sup>5</sup>
- 1 ≤ E = `edges.size()` ≤ 10<sup>5</sup>