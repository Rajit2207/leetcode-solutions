## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used a stack data structure dynamically allocated with an array. As we scan each character, opening brackets (`(`, `{`, `[`) are pushed onto the stack. When a closing bracket is encountered, we pop the top element and check if it matches the corresponding pair. The string is valid only if the stack is completely empty after iterating through the entire string.

### Complexity
- Time: $O(n)$ where $n$ is the length of the string, traversing each character once.
- Space: $O(n)$ for the stack storage in the worst case (e.g., all opening brackets).

### Notes
An early parity check `len % 2 != 0` immediately rejects any odd-length string before allocating memory.