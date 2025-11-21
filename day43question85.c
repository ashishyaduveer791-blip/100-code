#include <stdio.h>
int main()
{
    char str[100];
    int i, len = 0;
    printf("Enter a strinf:");
    fgets(str, sizeof(str), stdin);
    while (str[len] != '\0')
    {
        len++;
        /* code */
    }
    len--;
    printf("Reversed string:");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
        /* code */
    }
    return 0;
}