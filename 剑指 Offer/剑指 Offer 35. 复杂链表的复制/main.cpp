#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
    unordered_map<Node*, Node*> m_map;
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr)
            return nullptr;

        if(m_map.find(head) == m_map.end())
        {
            Node* x = new Node(head->val);
            m_map[head] = x;
            x->next = copyRandomList(head->next);
            x->random = copyRandomList(head->random);
        }

        return m_map[head];
    }
};
