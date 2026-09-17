#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    
    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    
    return prev;
}

// Helper to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

int main() {
    // Test Case 1: Standard list [1 -> 2 -> 3]
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);

    struct ListNode* rev1 = reverseList(head1);
    printf("Test 1 Result: %d -> %d -> %d\n", rev1->val, rev1->next->val, rev1->next->next->val);

    // Test Case 2: Edge case (single node [5])
    struct ListNode* head2 = createNode(5);
    struct ListNode* rev2 = reverseList(head2);
    printf("Test 2 Result: %d\n", rev2->val);

    return 0;
}