#include <string.h>

char * replaceSpace(char *s)
{
    int len = strlen(s);
    int cnt = 0;

    for(int i = 0; i < len; i++)
    {
        if(s[i] == ' ')
            cnt++;
    }

    int len2 = len + cnt * 2;
    char * rc = (char *)malloc(len2 + 1);
    for(int i = 0, j = 0; i < len ; i++)
    {
        if(s[i] == ' ')
        {
            rc[j++] = '%';
            rc[j++] = '2';
            rc[j++] = '0';
        }
        else
        {
            rc[j++] = s[i];
        }
    }
    rc[len2] = '\0';
    return rc;
}
