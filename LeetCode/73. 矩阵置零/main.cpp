#include <bits/stdc++.h>
using namespace std;

// 标记数组
// 时间复杂度：O(m*n)
// 空间复杂度：O(m+n)
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        auto m = matrix.size();
        auto n = matrix[0].size();
        vector<int> row(m);
        vector<int> col(n);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!matrix[i][j])
                {
                    row[i] = col[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (row[i] || col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
