#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 0, x, y, c = 0, sb = 0, b = 0;
    FILE *fp;
    fp = fopen("del.c", "r");
    if (fp == NULL)
    {
        printf("Not found this file :");
        exit(1);
    }
    while ((x = fgetc(fp)) != EOF)
    {
        switch (x)
        {
        case ';':
            c++;
            break;

        case '{':
            sb++;
            break;

        case '(':
            b++;
            break;

        case '#':
            i++;
            break;
        }
    }
    fclose(fp);
    printf("\n Summary of ç Program\n");
    printf("==========================");
    printf("\n Total statement : %d", c + i);
    printf("\n Total statements : %d", i);
    printf("\n Total Block {} : %d", sb);
    printf("\n Total Brackets () : %d", b);
    printf("\n==============================");
}