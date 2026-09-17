#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) {
        return 0;
    }
    
    int min_price = prices[0];
    int max_profit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }
    
    return max_profit;
}

int main() {
    // Test Case 1: Standard input with profit opportunity
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int res1 = maxProfit(prices1, 6);
    printf("Test 1 Result: %d (Expected: 5)\n", res1);

    // Test Case 2: Monotonically decreasing prices (no profit possible)
    int prices2[] = {7, 6, 4, 3, 1};
    int res2 = maxProfit(prices2, 5);
    printf("Test 2 Result: %d (Expected: 0)\n", res2);

    return 0;
}