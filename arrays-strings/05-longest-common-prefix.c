#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    char* prefix = (char*)malloc(strlen(strs[0]) + 1);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';
        if (j == 0) {
            break;
        }
    }

    return prefix;
}

int main() {
    // Test Case 1: Standard input with a shared prefix
    char* strs1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(strs1, 3);
    printf("Test 1 Result: \"%s\" (Expected: \"fl\")\n", res1);
    free(res1);

    // Test Case 2: No common prefix
    char* strs2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(strs2, 3);
    printf("Test 2 Result: \"%s\" (Expected: \"\")\n", res2);
    free(res2);

    return 0;
}