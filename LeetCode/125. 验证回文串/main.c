// 125. 验证回文串
// 如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，短语正着读和反着读都一样。则可以认为该短语是一个 回文串 。
// 字母和数字都属于字母数字字符。
// 给你一个字符串 s，如果它是 回文串 ，返回 true ；否则，返回 false 。

bool isPalindrome(char *s)
{
    int len = strlen(s);

    int l = 0;
    int r = len - 1;

    while (l < r)
    {
        if (!isalnum(s[l]))
        {
            l++;
        }
        else if (!isalnum(s[r]))
        {
            r--;
        }
        else if (tolower(s[l]) != tolower(s[r]))
        {
            return false;
        }
        else
        {
            l++;
            r--;
        }
    }

    return true;
}
