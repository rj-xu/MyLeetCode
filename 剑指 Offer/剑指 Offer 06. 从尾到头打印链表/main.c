#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* reversePrint(struct ListNode* head, int* returnSize)
{
    int len = 0;

    struct ListNode* p = head;

    while(p)
    {
        p = p->next;
        len++;
    }

    int *rc = (int *)malloc(sizeof(int) * len);
    int i = len - 1;
    p = head;
    while(p)
    {
        rc[i--] = p->val;
        p = p->next;
    }

    *returnSize = len;
    return rc;
}
