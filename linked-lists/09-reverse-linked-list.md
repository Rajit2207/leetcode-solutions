## Problem: Reverse a Linked List (Easy-Medium)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Used an iterative three-pointer technique (`prev`, `curr`, and `nextTemp`). At each step, we record the next node, reverse the current node's pointer to point back to `prev`, advance `prev` to `curr`, and move `curr` forward.

### Complexity
- Time: $O(n)$ where $n$ is the number of nodes in the list, traversing each node once.
- Space: $O(1)$ auxiliary space since pointers are rewired strictly in-place.

### Notes
Handling empty lists (`NULL`) or single-element lists works naturally without extra conditional guards.