#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> dict;
        dict[' '] = ' ';

        for (int i = 0; auto c : key)
        {
            if (dict.find(c) == dict.end())
            {
                dict[c] = 'a' + i;
                i++;
            }
        }

        for (auto &c : message)
        {
            c = dict[c];
        }

        return message;
    }
};
