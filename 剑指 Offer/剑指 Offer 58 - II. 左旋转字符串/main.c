// 字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。请定义一个函数实现字符串左旋转操作的功能。
// 比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *reverseLeftWords(char *s, int n)
{

    int len = strlen(s);
    char *rc = malloc(len + 1);

    memcpy(rc, s + n, len - n);
    memcpy(rc + len - n, s, n);
    rc[len] = '\0';

    return rc;
}

int main()
{
    char *s = "abcdefg";
    char *r = reverseLeftWords(s, 2);

    printf("%s", r);
}
