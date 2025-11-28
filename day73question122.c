#include <stdio.h>

int main()
{
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
