// 输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    stack<int> m_stack;
public:
    vector<int> reversePrint(ListNode* head) {
        ListNode* node = head;
        vector<int> rc;

        while(node)
        {
            m_stack.push(node->val);
            node = node->next;
        }

        while(!m_stack.empty())
        {
            rc.push_back(m_stack.top());
            m_stack.pop();
        }

        return rc;
    }
};

class Solution
{
public:
    vector<int> reversePrint(ListNode *head)
    {
        if (!head)
            return {};

        auto r = reversePrint(head->next);
        r.push_back(head->val);
        return r;
    }
};
