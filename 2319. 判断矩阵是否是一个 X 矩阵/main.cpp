#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkXMatrix(vector<vector<int>> &grid)
    {
        int m = grid.size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((i == j) || (i == (m - 1 - j)) || (m - 1 - i) == j)
                {
                    if (grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else
                {
                    if (grid[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
