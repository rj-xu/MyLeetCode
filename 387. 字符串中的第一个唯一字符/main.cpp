#include <bits/stdc++.h>
using namespace std;

// 哈希表记录次数
// 时间复杂度：O(n)
// 空间复杂度：O(∣Σ∣) 字符串集
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> m;
        for (auto c : s)
        {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
