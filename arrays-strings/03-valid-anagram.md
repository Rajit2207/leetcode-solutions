## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a fixed-size frequency array of size 26 to count character occurrences. We increment the count for every character in string `s` and decrement for every character in string `t`. If all values in the frequency array return to zero, the two strings are anagrams.

### Complexity
- Time: $O(n)$ where $n$ is the length of the string, iterating through the characters once.
- Space: $O(1)$ auxiliary memory since the frequency array size is constant (26 lowercase English letters).

### Notes
Checking `strlen(s) != strlen(t)` at the very beginning serves as an immediate early exit for strings of unequal lengths.