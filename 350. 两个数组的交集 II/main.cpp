#include <bits/stdc++.h>
using namespace std;

// 哈希表
// 时间复杂度：O(m+n)
// 空间复杂度：O(min(m,n))
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
            return intersect(nums2, nums1);

        unordered_map<int, int> m;
        for (auto x : nums1)
        {
            m[x]++;
        }

        vector<int> rc;
        for (auto x : nums2)
        {
            if (m.find(x) != m.end())
            {
                rc.push_back(x);
                m[x]--;
                if (m[x] == 0)
                    m.erase(x);
            }
        }

        return rc;
    }
};


// 排序+双指针
