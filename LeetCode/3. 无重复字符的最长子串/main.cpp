#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.size() == 0)
            return 0;

        unordered_set<char> s;
        int max = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++)
        {
            while (s.find(s[i]))
        }
    }
};
