## Problem: Move Zeroes (Easy-Medium)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer in-place compaction strategy. We scan through the array with pointer `i` and write all non-zero values to `insertPos`. After copying all non-zero numbers in order, we fill the remaining slots from `insertPos` to the end of the array with zeroes.

### Complexity
- Time: $O(n)$ where $n$ is the number of elements in the array, traversed in two linear passes.
- Space: $O(1)$ auxiliary space since the modification is done strictly in-place.

### Notes
This approach avoids creating an extra buffer array and preserves the relative ordering of non-zero elements.