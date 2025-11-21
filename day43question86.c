#include <stdio.h>

int main()
{
    char str[100];
    int start = 0, end = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[end] != '\0')
    {
        end++;
    }
    end--;
    if (str[end] == '\n')
    {
        end--;
    }

    while (start < end)
    {
        if (str[start] != str[end])
        {
            printf("Not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("Palindrome\n");
    return 0;
}
