# All Unique Permutations of an array
## Difficulty: Medium
## Points: 4
### Description:
Given an array `arr[]` that may contain duplicates. Find all possible distinct permutations of the array in sorted order.  
Note: A sequence A is greater than sequence B if there is an index i for which A<sub>j</sub> = B<sub>j</sub> for all j < i and A<sub>i</sub> > B<sub>i</sub>.

### Examples:
```
Input: arr[] = [1, 3, 3]
Output: [[1, 3, 3], [3, 1, 3], [3, 3, 1]]
Explanation: These are the only possible distinct permutations for the given array.
```
```
Input: arr[] = [2, 3]
Output: [[2, 3], [3, 2]]
Explanation: These are the only possible distinct permutations for the given array.
```
### Constraints:
- 1 ≤ `arr.size()` ≤ 9