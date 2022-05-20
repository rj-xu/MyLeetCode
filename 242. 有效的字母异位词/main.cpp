#include <bits/stdc++.h>
using namespace std;

// 哈希表
// 时间复杂度：O(n)
// 空间复杂度：O(∣Σ∣)
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> m;
        for (auto c : s)
        {
            m[c]++;
        }

        for (auto c : t)
        {
            m[c]--;
            if (m[c] < 0)
                return false;
        }

        return true;
    }
};
