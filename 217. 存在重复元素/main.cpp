#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        auto n = nums.size();
        unordered_set<int> s;
        for (auto x : nums)
        {
            if (s.find(x) != s.end())
            {
                return true;
            }
            s.insert(x);
        }
        return false;
    }
};
