#include <bits/stdc++.h>
using namespace std;

// 动态规划
// f(i) = max{f(i-1) + nums[i], nums[i]}
// 时间复杂度：O(n)
// 空间复杂度：O(n)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int pre = 0;
        int rc = nums[0];
        for (auto x : nums)
        {
            pre = max(pre + x, x);
            rc = max(rc, pre);
        }
        return rc;
    }
};

// 分治
// ??
