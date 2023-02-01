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
// 时间复杂度：O(mlogm + nlogn)
// 空间复杂度：O(min(m,n))
class Solutions
{a
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        auto len1 = nums1.size();
        auto len2 = nums2.size();

        int p1 = 0;
        int p2 = 0;
        vector<int> rc;

        while (p1 < len1 && p2 < len2)
        {
            if (nums1[p1] < nums2[p2])
            {
                p1++;
            }
            else if (nums1[p1] > nums2[p2])
            {
                p2++;
            }
            else
            {
                rc.push_back(nums1[p1]);
                p1++;
                p2++;
            }
        }

        return rc;
    }
};
