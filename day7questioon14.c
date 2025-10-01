#include <stdio.h>
#include <ctype.h> // For tolower() and isalpha() functions

int main()
{
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to ignore any leading whitespace

    // Check if the input is an alphabet
    if (!isalpha(ch))
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }
    else
    {
        // Convert the character to lowercase for uniform comparison
        char lowerCh = tolower(ch);

        // Check if the character is a vowel
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
        {
            printf("The character '%c' is a vowel.\n", ch);
        }
        else
        {
            printf("The character '%c' is a consonant.\n", ch);
        }
    }

    return 0;
}
