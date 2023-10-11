// 58. 最后一个单词的长度

// 给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。

// 单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。

int lengthOfLastWord(char *s)
{
    int cnt = 0;
    int len = strlen(s);
    int i = len - 1;

    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    while (i >= 0 && s[i] != ' ')
    {
        cnt++;
        i--;
    }

    return cnt;
}
