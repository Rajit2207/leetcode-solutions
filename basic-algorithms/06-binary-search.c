#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    // Test Case 1: Target exists in array
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    int res1 = search(nums1, 6, target1);
    printf("Test 1 Result: %d (Expected: 4)\n", res1);

    // Test Case 2: Target does not exist
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    int res2 = search(nums2, 6, target2);
    printf("Test 2 Result: %d (Expected: -1)\n", res2);

    return 0;
}