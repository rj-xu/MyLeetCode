#include <bits/stdc++.h>
using namespace std;

// 一次遍历
// 时间复杂度：O(1)
// 空间复杂度：O(1)
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int row[9][9] = {0};
        int col[9][9] = {0};
        int box[3][3][9] = {0};

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char c = board[i][j];
                if (c != '.')
                {
                    int x = c - '0' - 1;
                    if (++row[i][x] > 1)
                        return false;
                    if (++col[j][x] > 1)
                        return false;
                    if (++box[i / 3][j / 3][x] > 1)
                        return false;
                }
            }
        }

        return true;
    }
};
