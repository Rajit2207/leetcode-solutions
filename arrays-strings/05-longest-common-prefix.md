## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used horizontal scanning. We initialize the prefix as the first string in the array. For each subsequent string, we compare characters sequentially and truncate the prefix string at the first point of divergence.

### Complexity
- Time: $O(S)$ where $S$ is the sum of all characters across all strings in the worst case.
- Space: $O(m)$ where $m$ is the length of the first string allocated for prefix storage.

### Notes
If at any point the matching length reduces to 0, an early break halts unnecessary comparisons against remaining strings.