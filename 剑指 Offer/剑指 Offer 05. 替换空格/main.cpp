// 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceSpace(string s) {
        int size = s.size();
        int new_size = s.size() + count(s.begin(), s.end(), ' ') * 2;
        s.resize(new_size);

        for(int i = size - 1 , j = new_size - 1; i >= 0; i--, j--)
        {
            char c = s[i];
            if(c != ' ')
             {
                s[j] = c;
             }
            else
            {
                s[j--] = '0';
                s[j--] = '2';
                s[j] = '%';
            }
        }
        return s;
    }
};
