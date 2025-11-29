
#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter filename:");
    scanf("%s ", filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: File does not exit or cannnot be opened.\n");
        return 1;
    }

    printf("\nFile content\n");
    while ((ch == fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}