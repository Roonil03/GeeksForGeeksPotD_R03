# Min Cost Climbing Stairs
## Difficulty: Medium
## Points: 4
### Description:
Given an array of integers `cost[]` where `cost[i]` is the cost of the i<sup>th</sup> step on a staircase. Once the cost is paid, you can either climb one or two steps. Return the minimum cost to reach the top of the floor.  
Assume 0-based Indexing. You can either start from the step with index 0, or the step with index 1.

### Examples:
```
Input: cost[] = [10, 15, 20]
Output: 15
Explanation: Cheapest option is to start at cost[1], pay that cost, and go to the top.
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/708151/Web/Other/blobid1_1741612335.png"><br>
```
Input: cost[] = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
Output: 6
Explanation: Cheapest option is to start on cost[0], and only step on 1s, skipping cost[3].
```
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/708151/Web/Other/blobid0_1741612208.png"><br>


### Constraints:
- 2 ≤ `cost.size()` ≤ 10<sup>5</sup>
- 0 ≤ `cost[i]` ≤ 999
