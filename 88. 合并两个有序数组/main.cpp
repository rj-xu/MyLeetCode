#include <bits/stdc++.h>
using namespace std;

// 双指针
// 时间复杂度：O(m+n)
// 空间复杂度：O(m+n)
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int p1 = 0;
        int p2 = 0;
        int nums[m + n];

        while (p1 < m || p2 < n)
        {
            int x;
            if (p1 == m)
            {
                x = nums2[p2++];
            }
            else if (p2 == n)
            {
                x = nums1[p1++];
            }
            else if (nums1[p1] < nums2[p2])
            {
                x = nums1[p1++];
            }
            else
            {
                x = nums2[p2++];
            }
            nums[p2 + p1 - 1] = x;
        }

        nums1.assign(nums, nums + m + n);
    }
};
