

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 200

void clean_string(const char s[], int freq[])
{
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = tolower(s[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
    }
}

int is_anagram(const char s1[], const char s2[])
{
    int f1[26], f2[26];

    clean_string(s1, f1);
    clean_string(s2, f2);

    for (int i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            return 0;
        }
    }
    return 1;
}

void trim(char s[])
{
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
    {
        s[len - 1] = '\n', s[len - 1] = '\0';
    }
}

int main()
{
    char str1[SIZE], str2[SIZE];

    printf("Enter first string: ");
    fgets(str1, SIZE, stdin);
    trim(str1);

    printf("Enter second string: ");
    fgets(str2, SIZE, stdin);
    trim(str2);

    if (is_anagram(str1, str2))
    {
        printf("Strings are anagrams.\n");
    }
    else
    {
        printf("Strings are NOT anagrams.\n");
    }

    return 0;
}
