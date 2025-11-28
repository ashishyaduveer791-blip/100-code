#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[500];
    int i;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    if (s[0] != '\0')
    {
        s[0] = toupper(s[0]);
    }

    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
    }

    printf("Title Case: %s", s);

    return 0;
}
