
#include <stdio.h>
#include <string.h>

int main()
{
    char s[500];
    scanf("%s", s);

    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1; 

    int maxLen = 0;
    int start = 0; 
    for (int i = 0; i < strlen(s); i++)
    {
        if (last[(unsigned char)s[i]] >= start)
        {
           
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i; 

        int windowLen = i - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("%d", maxLen);

    return 0;
}
