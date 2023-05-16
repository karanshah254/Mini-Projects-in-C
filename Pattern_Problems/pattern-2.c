#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 && j >= 1 && j <= 7)
            {
                printf("*");
            }
            else if (i == 2 && j >= 3 && j <= 7)
            {
                printf("*");
            }
            else if (i == 3 && j >= 4 && j <= 7)
            {
                printf("*");
            }
            else if (i == 4 && j == 7)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
