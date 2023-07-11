#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        vector<int> rc;

        while(l <= r)
        {
            int m = l + (r - l)/2;
            if(nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }
        rc.push_back((l == nums.size() || nums[l] != target) ?  -1 : l);

        r = nums.size() - 1;
        while(l <= r)
        {
            int m = l + (r - l)/2;
            if(nums[m] <= target)
                l = m + 1;
            else
                r = m - 1;
        }
        rc.push_back((r < 0 || nums[r] != target) ?  -1 : r);

        return rc;
    }
};
