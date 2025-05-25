# Pythagorean Triplet
## Difficulty: Medium
## Points: 4
### Description:
Given an array arr[], return true if there is a `triplet (a, b, c)` from the array (where a, b, and c are on different indexes) that satisfies a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup>, otherwise return false.

### Examples:
```
Input: arr[] = [3, 2, 4, 6, 5]
Output: true
Explanation: a=3, b=4, and c=5 forms a pythagorean triplet.
```
```
Input: arr[] = [3, 8, 5]
Output: false
Explanation: No such triplet possible.
```
```
Input: arr[] = [1, 1, 1]
Output: false
```
### Constraints:
- 1 <= `arr.size()` <= 10<sup>5</sup>
- 1 <= `arr[i]` <= 10<sup>3</sup>