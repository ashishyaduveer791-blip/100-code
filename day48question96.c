#include <stdio.h>
#include <string.h>

int main()
{
    char line[200];
    char word[60];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(line, 200, stdin);

    while (line[i] != '\0')
    {
        if (line[i] != ' ' && line[i] != '\n')
        {
            word[j] = line[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            for (int t = j - 1; t >= 0; t--)
                printf("%c", word[t]);

            printf(" ");
            j = 0;
        }

        i++;
    }

    if (j > 0)
    {
        word[j] = '\0';
        for (int t = j - 1; t >= 0; t--)
            printf("%c", word[t]);
    }

    return 0;
}
