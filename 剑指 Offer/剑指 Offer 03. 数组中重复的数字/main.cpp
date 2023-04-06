#include <bits/stdc++.h>
using namespace std;

class Solution {
    unordered_set<int> m_set;
public:
    int findRepeatNumber(vector<int>& nums) {
        for(auto x : nums)
        {
            if(m_set.find(x) != m_set.end())
            {
                    return x;
            }
            else
            {
                m_set.insert(x);
            }
        }

        return nums[0];
    }
};
