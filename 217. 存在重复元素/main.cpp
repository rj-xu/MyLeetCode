#include <bits/stdc++.h>
using namespace std;

// 哈希表
// 时间复杂度：O(n)
// 空间复杂度：O(n)
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
