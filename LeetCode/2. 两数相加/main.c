#include <stddef.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;
    struct ListNode *temp = NULL;

    int carry = 0;

    while(l1 || l2)
    {
        int sum = carry;

        if(l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }

        if(l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        temp = malloc(sizeof(struct ListNode));
        temp->val = sum%10;
        temp->next = NULL;
        carry = sum/10;

        if(head)
        {
            tail->next = temp;
            tail = temp;
        }
        else
        {
            head = temp;
            tail = head;
        }
    }

    if(carry)
    {
        temp = malloc(sizeof(struct ListNode));
        temp->val = carry;
        temp->next = NULL;
        tail->next = temp;
    }

    return head;
}
