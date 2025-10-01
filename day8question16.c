#include <stdio.h>
#include <ctype.h> // For character handling functions

int main()
{
    char ch;

    // Prompt the user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the type of character
    if (isupper(ch))
    {
        printf("The character '%c' is an uppercase alphabet.\n", ch);
    }
    else if (islower(ch))
    {
        printf("The character '%c' is a lowercase alphabet.\n", ch);
    }
    else if (isdigit(ch))
    {
        printf("The character '%c' is a digit.\n", ch);
    }
    else
    {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
