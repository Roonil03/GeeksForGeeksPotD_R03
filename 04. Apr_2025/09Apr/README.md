# Articulation Point - II
## Difficulty: Hard
## Points: 8
### Description:
You are given an undirected graph with V vertices and E edges. The graph is represented as a 2D array `edges[][]`, where each element `edges[i]` = `[u, v]` indicates an undirected edge between vertices u and v.  
Your task is to return all the articulation points (or cut vertices) in the graph.  
An articulation point is a vertex whose removal, along with all its connected edges, increases the number of connected components in the graph.

Note: The graph may be disconnected, i.e., it may consist of more than one connected component.
If no such point exists, return {-1}.

### Examples :
```
Input: V = 5, edges[][] = [[0, 1], [1, 4], [4, 3], [4, 2], [2, 3]]
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/892595/Web/Other/blobid3_1744109134.png"><br>
```
Output: [1, 4]
Explanation: Removing the vertex 1 or 4 will disconnects the graph as-
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/892595/Web/Other/blobid4_1744109133.png"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/892595/Web/Other/blobid5_1744109133.png"><br>
```
Input: V = 4, edges[][] = [[0, 1], [0, 2]]
Output: [0]
Explanation: Removing the vertex 0 will increase the number of disconnected components to 3.  
```

### Constraints:
- 1 ≤ V, E ≤ 10<sup>4</sup>