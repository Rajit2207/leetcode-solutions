## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a brute-force nested iteration strategy. For every number at index `i`, we scan through the rest of the array at index `j` to check if their sum equals the target. Once the pair is found, we dynamically allocate a 2-element array and return the indices.

### Complexity
- Time: $O(n^2)$ due to the nested loop scanning pairs.
- Space: $O(1)$ auxiliary space excluding the returned array.

### Notes
Be mindful of negative values and duplicate numbers when matching the target sum. A hash table approach can optimize the runtime to $O(n)$.