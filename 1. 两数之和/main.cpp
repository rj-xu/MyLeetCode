#include <bits/stdc++.h>
using namespace std;

// 哈希表
// 时间复杂度：O(n)
// 空间复杂度：O(n)
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            auto iter = m.find(target - nums[i]);
            if (iter != m.end())
                return {iter->second, i};
            else
                m[nums[i]] = i;
        }
        return {};
    }
};
