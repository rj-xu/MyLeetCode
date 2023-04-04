// 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        int size = s.size();
        int new_size = s.size() + count(s.begin(), s.end(), ' ') * 2;
        s.resize(new_size);

        for(int i = 0 , j = 0; i < size; i++, j++)
        {
            char c = s[size - 1 -i];
            if(c != ' ')
             {
                s[new_size - 1 -j] = c;
             }
            else
            {
                s[new_size - 1 -j] = '0';
                j++;
                s[new_size - 1 -j] = '2';
                j++;
                s[new_size - 1 -j] = '%';
            }
        }
        return s;
    }
};
