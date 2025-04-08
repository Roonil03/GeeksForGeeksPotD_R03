# Bridge edge in a graph
## Difficulty: Medium
## Points: 4
### Description:
Given an undirected graph with V vertices numbered from 0 to V-1 and E edges, represented by 2d array `edges[][]`, where `edges[i]`=`[u,v]` represents the edge between the vertices u and v. Determine whether a specific edge between two vertices (c, d) is a bridge.  

Note:
- An edge is called a bridge if removing it increases the number of connected components of the graph.
- if there’s only one path between c and d (which is the edge itself), then that edge is a bridge.

### Examples:
```
Input:
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700463/Web/Other/5a46c789-a956-4196-a62c-7a1bb9d16db2_1685086697.png"><br>
```
c = 1, d = 2
Output: true
Explanation: From the graph, we can clearly see that blocking the edge 1-2 will result in disconnection of the graph.
Hence, it is a Bridge.
```
```
Input:
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700463/Web/Other/d443aa5e-21e9-47dc-a06e-dd99ea03fbc9_1685086698.png"><br>
```
c = 0, d = 2
Output: false
Explanation:
```
<img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/700463/Web/Other/8be4152b-afea-4c19-802c-ba1647da0cf9_1685086698.png"><br>
```
Blocking the edge between nodes 0 and 2 won't affect the connectivity of the graph.
So, it's not a Bridge Edge. All the Bridge Edges in the graph are marked with a blue line in the above image.
```

### Constraints:
- 1 ≤ V, E ≤ 10<sup>5</sup>
- 0 ≤ c, d ≤ V-1