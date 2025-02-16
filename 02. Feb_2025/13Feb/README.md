# Pair Sum in BST
## Difficulty: Medium
## Points: 4
### Description:
Given a Binary Search Tree(BST) and a target. Check whether there's a pair of Nodes in the BST with value summing up to the target. 
### Examples:
```
Input: root = `[7, 3, 8, 2, 4, N, 9]`, target = 12  
```
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240821183540/bst.webp"><br>
```
Output: True  
Explanation: In the binary tree above, there are two nodes (8 and 4) that add up to 12.
```
```
Input: root = `[9, 5, 10, 2, 6, N, 12]`, target = 23  
```
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20240821184007/bst-3.webp"><br>
```
Output: False  
Explanation: In the binary tree above, there are no such two nodes exists that add up to 23.
```

### Constraints:

- 1 ≤ Number of Nodes ≤ 10^5
- 1 ≤ `target` ≤ 10^6