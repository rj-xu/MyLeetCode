struct ListNode *deleteNode(struct ListNode *head, int val)
{
    if (head->val == val)
        return head->next;

    struct ListNode *node = head->next;
    struct ListNode *prev = head;

    while (node && node->val != val)
    {
        prev = node;
        node = node->next;
    }

    if (node)
        prev->next = node->next;

    return head;
}
