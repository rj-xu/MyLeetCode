#include <bits/stdc++.h>
using namespace std;

// 一次遍历
// 时间复杂度：O(n)
// 空间复杂度：O(1)
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minp = INT_MAX;
        int maxp = 0;
        for (auto p : prices)
        {
            maxp = max(p - minp, maxp);
            minp = min(p, minp);
        }
        return maxp;
    }
};
