#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char word[50];
    int i = 0, j = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0')
    {
        if (name[i] != ' ' && name[i] != '\n')
        {
            word[j] = name[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            printf("%c ", word[0]);

            j = 0;
        }
        i++;
    }

    if (j > 0)
    {
        word[j] = '\0';
        printf("%c", word[0]);
    }

    return 0;
}
