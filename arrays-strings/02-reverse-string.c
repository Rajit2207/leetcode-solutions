#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Standard input
    char str1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(str1, 5);
    printf("Test 1 Result: %s\n", str1); // Expected: "olleh"

    // Test Case 2: Edge case (single character)
    char str2[] = {'a'};
    reverseString(str2, 1);
    printf("Test 2 Result: %s\n", str2); // Expected: "a"

    return 0;
}