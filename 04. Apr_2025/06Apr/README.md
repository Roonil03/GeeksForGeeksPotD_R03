# Topological sort
## Difficulty: Medium
## Points: 4
### Description:
Given a `Directed Acyclic Graph (DAG)` of V (0 to V-1) vertices and E edges represented as a 2D list of `edges[][]`, where each entry `edges[i]` = `[u, v]` denotes an directed edge `u -> v`. Return topological sort for the given graph.

Topological sorting for Directed Acyclic Graph (DAG) is a linear ordering of vertices such that for every directed edge `u -> v`, vertex u comes before v in the ordering.  
Note: As there are multiple Topological orders possible, you may return any of them. If your returned Topological sort is correct then the output will be true else false.

### Examples:
```
Input: V = 4, E = 3, edges[][] = [[3, 0], [1, 0], [2, 0]]
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700255/Web/Other/24aa5d54-bc1f-489c-bd2d-ad02ddccdf31_1684492511.png"><br>
```
Output: true
Explanation: The output true denotes that the order is valid. Few valid Topological orders for the given graph are:
[3, 2, 1, 0]
[1, 2, 3, 0]
[2, 3, 1, 0]
```
```
Input: V = 6, E = 6, edges[][] = [[1, 3], [2, 3], [4, 1], [4, 0], [5, 0], [5,2]]
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700255/Web/Other/c35bb1d1-130c-49aa-a17e-118181d7bdcd_1684492512.png"><br>
```
Output: true
Explanation: The output true denotes that the order is valid. Few valid Topological orders for the graph are:
[4, 5, 0, 1, 2, 3]
[5, 2, 4, 0, 1, 3]
```

### Constraints:
- 2  ≤  V  ≤  10<sup>3</sup>
- 1  ≤  E = `edges.size()`  ≤  `(V * (V - 1)) / 2`