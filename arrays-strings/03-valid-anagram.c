#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_s != len_t) {
        return false;
    }
    
    int counts[26] = {0};
    
    for (int i = 0; i < len_s; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test Case 1: Standard anagram
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 Result: %s\n", isAnagram(s1, t1) ? "Passed (true)" : "Failed");

    // Test Case 2: Different strings / lengths
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 Result: %s\n", !isAnagram(s2, t2) ? "Passed (false)" : "Failed");

    return 0;
}