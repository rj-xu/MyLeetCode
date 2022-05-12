#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> rc(numRows);
        for (int i = 0; i < numRows; i++)
        {
            rc[i].resize(i + 1);
            rc[i][0] = 1;
            rc[i][i] = 1;
            for (int j = 1; j < i; j++)
                rc[i][j] = rc[i - 1][j - 1] + rc[i - 1][j];
        }
        return rc;
    }
};
