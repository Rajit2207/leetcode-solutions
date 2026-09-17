## Problem: Binary Search (Easy-Medium)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used standard binary search on a sorted array. We maintain two pointers, `left` and `right`. In each step, we calculate `mid = left + (right - left) / 2` to prevent potential integer overflow, compare `nums[mid]` with `target`, and halve the search interval accordingly.

### Complexity
- Time: $O(\log n)$ because the search space is divided by two in every step.
- Space: $O(1)$ auxiliary space as the search is performed iteratively using constant extra variables.

### Notes
Using `left + (right - left) / 2` avoids integer overflow that can occur with `(left + right) / 2` when values are large.