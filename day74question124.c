#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char n1[100], n2[100];
    char ch;

    printf("Enter source: ");
    scanf("%s", n1);
    printf("Enter dest: ");
    scanf("%s", n2);

    f1 = fopen(n1, "r");
    if (!f1)
    {
        printf("Error opening file\n");
        return 1;
    }

    f2 = fopen(n2, "w");

    while ((ch = fgetc(f1)) != EOF)
    {
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);

    printf("Copied\n");
    return 0;
}