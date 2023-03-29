// 定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的 min 函数在该栈中，调用 min、push 及 pop 的时间复杂度都是 O(1)。

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<int> m_stack_min;
    stack<int> m_stack;
public:
    /** initialize your data structure here. */
    MinStack() {
        m_stack_min.push(INT_MAX);
    }

    void push(int x) {
        m_stack.push(x);
        m_stack_min.push(::min(m_stack_min.top(), x));
    }

    void pop() {
        m_stack.pop();
        m_stack_min.pop();
    }

    int top() {
        return m_stack.top();
    }

    int min() {
        return m_stack_min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
