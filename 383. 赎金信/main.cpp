#include <bits/stdc++.h>
using namespace std;

// 哈希表记录次数
// 时间复杂度：O(m+n)
// 空间复杂度：O(∣Σ∣) 字符串集
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for (auto c : ransomNote)
        {
            m1[c]++;
        }

        for (auto c : magazine)
        {
            m2[c]++;
        }

        for (auto [c, n] : m1)
        {
            if (m2.count(c) == 0 || m1[c] > m2[c])
                return false;
        }

        return true;
    }
};
