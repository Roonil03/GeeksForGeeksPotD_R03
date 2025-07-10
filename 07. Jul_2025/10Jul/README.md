# Find the longest string
## Difficulty: Medium
## Points: 4
### Description:
Given an array of strings `arr[]`. Find the longest string in `arr[]` such that every prefix of it is also present in the array `arr[]`. 

Note: If multiple strings have the same maximum length, return the lexicographically smallest one.

### Examples:
```
Input: arr[] = ["p", "pr", "pro", "probl", "problem", "pros", "process", "processor"]
Output: pros
Explanation: "pros" is the longest word with all prefixes ("p", "pr", "pro", "pros") present in the array arr[].
```
```
Input: arr[] = ["ab", "a", "abc", "abd"]
Output: abc
Explanation: Both "abc" and "abd" has all the prefixes in arr[]. Since, "abc" is lexicographically smaller than "abd", so the output is "abc".
```

### Constraints:
- 1 ≤ `arr.length()` ≤ 10<sup>3</sup>
- 1 ≤ `arr[i].length` ≤ 10<sup>3</sup>