# Decode the string
## Difficulty: Medium
## Points: 4
### Description:
Given an encoded string s, decode it by expanding the pattern `k[substring]`, where the substring inside brackets is written k times. k is guaranteed to be a positive integer, and encodedString contains only lowercase english alphabets. Return the final decoded string.

Note: The test cases are generated so that the length of the output string will never exceed 10<sup>5</sup>.


### Examples:
```
Input: s = "3[ab]"
Output: "ababab"
Explanation: The substring "ab" is repeated 3 times giving "ababab".
```
```
Input: s = "3[b2[ca]]"
Output: "bcacabcacabcaca"
Explanation:
1. Inner substring “2[ca]” breakdown into “caca”.
2. Now, new string becomes “3[bcaca]”
3. Similarly “3[bcaca]” becomes “bcacabcacabcaca ” which is final result.
```

### Constraints:
- 1 ≤ `|s|` ≤ 10<sup>5</sup>
- 1 ≤ `k` ≤ 100