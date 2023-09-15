// 输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。
// 为简单起见，标点符号和普通字母一样处理。
// 例如输入字符串"I am a student. "，则输出"student. a am I"。

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = s.size() - 1;

        while(l <= r && s[l] == ' ')
        {
            l++;
        }

        while(l <= r && s[r] == ' ')
        {
            r--;
        }

        deque<string> d;
        string word;

        while(l <= r)
        {
            char c = s[l];
            if(word.size() && c == ' ')
            {
                d.push_front(move(word));
                word ="";
            }
            else if( c!= ' ')
            {
                word += c;
            }

            l++;
        }
        d.push_front(move(word));

        string ans;
        while (!d.empty()) {
            ans += d.front();
            d.pop_front();
            if (!d.empty())
            {
                ans += ' ';
            }
        }
        return ans;
    }
};
