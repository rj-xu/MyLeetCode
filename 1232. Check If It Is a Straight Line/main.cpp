#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        if (coordinates.size() == 2)
            return true;

        int delta_x = coordinates[1][0] - coordinates[0][0];
        int delta_y = coordinates[1][1] - coordinates[0][1];

        for (int i = 2; i < coordinates.size(); i++)
        {
            if (delta_y * (coordinates[i][0] - coordinates[1][0]) !=
                (coordinates[i][1] - coordinates[1][1]) * delta_x)
                return false;
        }
        return true;
    }
};
