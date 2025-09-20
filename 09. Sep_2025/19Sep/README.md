# Min Add to Make Parentheses Valid
## Difficulty: Medium
## Points: 4
### Description:
You are given a string s consisting only of the characters '`(`' and '`)`'. Your task is to determine the minimum number of parentheses (either '`(`' or '`)`') that must be inserted at any positions to make the string s a valid parentheses string.

A parentheses string is considered valid if:
1. Every opening parenthesis '`(`' has a corresponding closing parenthesis '`)`'.
2. Every closing parenthesis '`)`' has a corresponding opening parenthesis '`(`'.
3. Parentheses are properly nested.

### Examples:
```
Input: s = "(()("
Output: 2
Explanation: There are two unmatched '(' at the end, so we need to add two ')' to make the string valid.
```
```
Input: s = ")))"
Output: 3
Explanation: Three '(' need to be added at the start to make the string valid.
```
```
Input: s = ")()()"
Output: 1 
Explanation: The very first ')' is unmatched, so we need to add one '(' at the beginning.
```
### Constraints:
- 1 ≤ `s.size()` ≤ 10<sup>5</sup>
- `s[i]` ∈ { '`(`' , '`)`' }
