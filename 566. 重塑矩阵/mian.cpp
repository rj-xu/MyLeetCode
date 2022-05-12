#include <bits/stdc++.h>
using namespace std;

// 二维数组的一维表示
// 时间复杂度：O(rc)
// 空间复杂度：O(1)
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c)
    {
        auto m = nums.size();
        auto n = nums[0].size();

        if (m * n != r * c)
            return nums;

        vector<vector<int>> rc(r, vector<int>(c));
        for (int x = 0; x < m * n; x++)
        {
            rc[x / c][x % c] = nums[x / n][x % n];
        }
        return rc;
    }
};
