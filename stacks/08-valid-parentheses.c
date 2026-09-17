#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }

    char* stack = (char*)malloc(len * sizeof(char));
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false;
            }
        }
    }

    bool valid = (top == -1);
    free(stack);
    return valid;
}

int main() {
    // Test Case 1: Standard valid nested brackets
    char s1[] = "()[]{}";
    printf("Test 1 Result: %s (Expected: Passed)\n", isValid(s1) ? "Passed" : "Failed");

    // Test Case 2: Edge case - mismatched closing bracket
    char s2[] = "(]";
    printf("Test 2 Result: %s (Expected: Passed)\n", !isValid(s2) ? "Passed" : "Failed");

    return 0;
}