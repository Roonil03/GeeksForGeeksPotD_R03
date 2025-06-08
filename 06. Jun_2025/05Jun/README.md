# Count the paths
## Difficulty: Medium
## Points: 4
### Description:
Given a Directed Acyclic Graph (DAG) with V nodes labeled from 0 to V-1, and a list of directed edges, count the total number of distinct paths from a given start node to a destination node. Each `edge` is represented as `edges[i]` = [u, v], indicating a directed edge from u to v.

### Examples:
```
Input: edges[][] = [[0,1], [0,3], [2,0], [2,1], [1,3]], V = 4, src = 2, dest = 3
Output: 3
Explanation: There are three ways to reach at 3 from 2. These are: 2 -> 1 -> 3, 2 -> 0 -> 3 and 2 -> 0 -> 1 -> 3.
```
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250421154205101614/Print-all-paths-1.webp"><br>
```
Input: edges[][] = [[0,1], [1,2], [1,3], [2,3]], V = 4, src = 0, dest = 3
Output: 2
Explanation: There is two way to reach at 3 from 0 that is : 0 -> 1 -> 2 -> 3 and 0 -> 1 -> 3.
```
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20250524103856837397/Print-all-paths-2.webp"><br>

### Constraints:
- 2  ≤  V  ≤  10<sup>3</sup>
- 1  ≤   E = `edges.size()`  ≤  (V * (V - 1)) / 2
