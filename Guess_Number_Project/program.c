#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n, us;
    int comp_nu;
    int count = 0, count1 = 0;

    printf("\nEnter Limit of Guessing (Max 3 Chances):  ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter User's Number : ");
        scanf("%d", &us);

        comp_nu = rand() % 100 + 1;

        printf("\nComputer's Selected Number --> %d", comp_nu);

        if (us == comp_nu)
        {
            printf("\n|---User Win---|");
            count += 1;
        }
        else
        {
            printf("\n|---Computer Win---|");
            count1 += 1;
        }

        printf("\n\n-- User Score-- |-- Computer Score --|");
        printf("\n        %d        |          %d", count, count1);
    }
    printf("\n");

    if (count1 > count)
    {
        printf("\n\tComputer Wins the Game");
    }
    else if (count > count1)
    {
        printf("\n\tUser Wins the Match");
    }
    else
    {
        printf("\n\t\tGame Tie");
    }
}