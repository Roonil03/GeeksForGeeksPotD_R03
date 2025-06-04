# Substrings with K Distinct
## Difficulty: Medium
## Points: 4
### Description:
Given a string consisting of lowercase characters and an integer k, the task is to count all possible substrings (not necessarily distinct) that have exactly k distinct characters. 
### Examples:
```
Input: s = "abc", k = 2
Output: 2
Explanation: Possible substrings are ["ab", "bc"]
```
```
Input: s = "aba", k = 2
Output: 3
Explanation: Possible substrings are ["ab", "ba", "aba"]
```
```
Input: s = "aa", k = 1
Output: 3
Explanation: Possible substrings are ["a", "a", "aa"]
```

### Constraints:
- 1 ≤ `s.size()` ≤ 10<sup>6</sup>
- 1 ≤ `k` ≤ 26