## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Used a single-pass greedy technique. We track the minimum purchase price seen so far while traversing the array. At each day, we calculate the potential profit if sold on that day and update the maximum profit recorded.

### Complexity
- Time: $O(n)$ where $n$ is the number of price entries, traversing the list in a single pass.
- Space: $O(1)$ auxiliary memory since only scalar variables (`min_price`, `max_profit`) are retained.

### Notes
Handling arrays with length 0 or 1 requires an early return of `0` since a transaction requires at least two distinct days.