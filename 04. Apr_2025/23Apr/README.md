# Unique Number II
## Difficulty: Medium
## Points: 4
### Description:
Given an array `arr[]` containing `2*n + 2` positive numbers, out of which `2*n` numbers exist in pairs whereas only two number occur exactly once and are distinct. Find the other two numbers. Return the answer in increasing order.

### Examples:
```
Input: arr[] = [1, 2, 3, 2, 1, 4]
Output: [3, 4] 
Explanation: 3 and 4 occur exactly once.
```
```
Input: arr[] = [2, 1, 3, 2]
Output: [1, 3]
Explanation: 1 and 3 occur exactly once.
```
```
Input: arr[] = [2, 1, 3, 3]
Output: [1, 2]
Explanation: 1 and 2 occur exactly once.
```
### Constraints:
- 2 ≤ `arr.size()` ≤ 10<sup>6 </sup>
- 1 ≤ `arr[i]` ≤ 5 * 10<sup>6</sup>
- `arr.size()` is even