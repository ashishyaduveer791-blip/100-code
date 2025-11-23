#include <stdio.h>
#include <string.h>

int main()
{
    char line[200];
    int i = 0, count = 0, maxCount = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(line, sizeof(line), stdin);

    while (line[i] != '\0')
    {
        if (line[i] != ' ' && line[i] != '\n')
        {
            if (count == 0)
                start = i;

            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                maxStart = start;
            }
            count = 0;
        }
        i++;
    }

    if (count > maxCount)
    {
        maxCount = count;
        maxStart = start;
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxCount; i++)
        printf("%c", line[i]);

    printf("\n");

    return 0;
}
