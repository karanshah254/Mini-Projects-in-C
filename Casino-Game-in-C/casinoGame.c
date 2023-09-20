#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rules();
int round1();
int main()
{
    rules();

    printf("\n\n");

    round1();

    return 0;
}

int round1()
{
    char name[50];
    int deposit1, bet1;
    int computer1, guess1;
    int bet2;
    int new_Won, new_Lose;

    srand(time(NULL));

    fflush(stdin);
    printf("\nEnter Visitors name : ");
    scanf("%s", &name);

    printf("\nEnter money you want to deposit for the game : ");
    scanf("%d", &deposit1);

    printf("\nYour current balance is %d rupees", deposit1);

    fflush(stdin);
    printf("\nEnter Betting Amount : ");
    scanf("%d", &bet1);

    fflush(stdin);
    if (bet1 > deposit1)
    {
        fflush(stdin);
        printf("\nMoney Exceeds");
        printf("\nEnter betting amount again : ");
        scanf("%d", &bet1);
    }

    computer1 = rand() % 10;
    printf("\nComputer choosed number is %d", computer1);

    fflush(stdin);
    printf("\nEnter Number between 1 to 10 : ");
    scanf("%d", &guess1);

    if (guess1 > 10)
    {
        fflush(stdin);
        printf("\nNumber exceeds");
        printf("\nEnter Number again : ");
        scanf("%d", &guess1);
    }

    if (guess1 == computer1)
    {
        fflush(stdin);
        printf("\nYou have won %d rupees", bet1);

        bet2 = bet1 * 10;

        if (bet1 == deposit1)
        {
            new_Won = bet2 + 0;
        }
        else
        {
            new_Won = bet2 + deposit1;
        }
        fflush(stdin);
        printf("\nYou have won %d rupees in total", new_Won);
    }
    else if (guess1 != computer1)
    {
        fflush(stdin);
        printf("\nYou have lost %d rupees", bet1);

        printf("\nThe Correct Numeber is ---- %d", computer1);

        new_Lose = deposit1 - bet1;
        printf("\nNow your current balance is --- %d", new_Lose);

        if (new_Lose == 0)
        {
            fflush(stdin);
            printf("\nSir your balance is 0 rupees");
            printf("\nYou have no money to play ..... Have a nice day");
        }
        else
        {
            int decision;
            fflush(stdin);
            printf("\nDo you want to continue : ");
            printf("\nPress 1 for Yes \nPress 2 For NO : ");
            scanf("%d", &decision);

            if (decision == 1)
            {
                rules();
                fflush(stdin);
                printf("\nYou have this amount left : %d rupees", new_Lose);

                int bet3;

                printf("\n%s Enter betting amount : ", name);
                scanf("%d", &bet3);

                if (bet3 > new_Lose)
                {
                    fflush(stdin);
                    printf("\nMoney Excceds \nEnter Amount Again : ");
                    scanf("%d", &bet3);
                }

                int guess2;

                printf("\nEnter Number betwen 1 to 10 : ");
                scanf("%d", &guess2);

                int computer2;
                computer2 = 9;

                if (guess2 > 10)
                {
                    fflush(stdin);
                    printf("\nNumber Exceeds \nEnter Number again : ");
                    scanf("%d", &guess2);
                }

                if (guess2 == computer2)
                {
                    fflush(stdin);
                    printf("You have won %d rupees", bet3);

                    int b;
                    b = bet3 * 10;

                    int b1;
                    if (bet3 == new_Lose)
                    {
                        b1 = b + 0;
                    }
                    else
                    {
                        b1 = b + new_Lose;
                    }

                    printf("\nYou have won %d rupees", b1);
                }
                else if (guess2 != computer2)
                {
                    fflush(stdin);
                    printf("\nYou have loss %d rupees", bet3);

                    int b2;
                    b2 = new_Lose - bet3;

                    printf("\nYou have %d as a total", b2);

                    if (b2 == 0)
                    {
                        fflush(stdin);
                        printf("\nYou have 0 balance \nHave a nice day");
                    }
                }
            }
            else if (decision == 2)
            {
                fflush(stdin);
                printf("\nHave a Nice Day Sir");
            }
        }
    }
}

int rules()
{
    printf("--------------------------------------------");

    printf("\nRULES : ");

    printf("\n--------------------------------------------");

    printf("\n1. Choose Number betweeen 1 to 10.");
    ;
    printf("\n2. If you win you will get 10 times the money you invested.");
    printf("\n3. If you lose you will lose the money you betted.\n");

    printf("--------------------------------------------");
}