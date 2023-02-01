#include <bits/stdc++.h>
using namespace std;

class CQueue
{
public:
    CQueue()
    {
    }

    void appendTail(int value)
    {
        m_stack0.push(value);
    }

    int deleteHead()
    {
        if (m_stack1.empty())
        {
            if (m_stack0.empty())
            {
                return -1;
            }

            while (!m_stack0.empty())
            {
                m_stack1.push(m_stack0.top());
                m_stack0.pop();
            }
        }

        int val = m_stack1.top();
        m_stack1.pop();
        return val;
    }

private:
    stack<int> m_stack0;
    stack<int> m_stack1;
};
