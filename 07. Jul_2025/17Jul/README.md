# Power of k in factorial of n
## Difficulty: Medium
## Points: 4
### Description:
Given two positive integers n and k, determine the highest value of x such that k<sup>x</sup> divides n! (n factorial) completely (i.e., n % (k<sup>x</sup>) == 0).

### Examples:
```
Input: n = 7, k = 2
Output: 4
Explanation: 7! = 5040, and 24 = 16 is the highest power of 2 that divides 5040.
```
```
Input: n = 10, k = 9
Output: 2
Explanation: 10! = 3628800, and 9² = 81 is the highest power of 9 that divides 3628800.
```

### Constraints:
- 1 ≤ `n` ≤ 10<sup>5</sup>
- 2 ≤ `k` ≤ 10<sup>5</sup>