#include <bits/stdc++.h>
using namespace std;

// 快慢指针
// 时间复杂度：O(N)
// 空间复杂度：O(1)

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if(!head)
            return false;

        ListNode *slow = head;
        ListNode *fast = head;

        do
        {
            if (fast->next == nullptr || fast->next->next == nullptr)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        } while (slow != fast);

        return true;
    }
};
