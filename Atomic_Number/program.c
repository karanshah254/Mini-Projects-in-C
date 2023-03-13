

// This Continous as per user's choice
// For Understanding Purpose I have used only 5 elements

#include <stdio.h>
int main()
{

    int n, m, a, exit, exit1;

    printf("\n*********Welcome To Modern Periodic Table*********");

    printf("\nPress 1 to know about elements");
    printf("\nPress 2 to Exit from this chaous");

    fflush(stdin);
    printf("\nEnter number : ");
    scanf("%d", &n);

    if (n == 1)
    {
        fflush(stdin);
    l2:
        printf("Press 3 for more details : ");
        scanf("%d", &a);
        if (a == 3)
        {

        l1:
            printf("\nEnter atomic number : ");
            scanf("%d", &m);

            fflush(stdin);
            if (m == 1)
            {
                printf("\t----------------------------------");
                printf("\n\tName : Hydrogen");
                printf("\n\tSymbol : H");
                printf("\n\tAtomic Number : 1");
                printf("\n\tElectronic Configuration : 1s1");
                printf("\n\t----------------------------------");
            }

            else if (m == 2)
            {
                printf("\t----------------------------------");
                printf("\n\tName : Helium");
                printf("\n\tSymbol : He");
                printf("\n\tAtomic Number : 2");
                printf("\n\tElectronic Configuration : 1s2");
                printf("\n\t----------------------------------");
            }

            else if (m == 3)
            {
                printf("\t----------------------------------");
                printf("\n\t| Name : Lithium |");
                printf("\n\t| Symbol : Li |");
                printf("\n\t| Atomic Number : 3");
                printf("\n\t| Electronic Configuration : 1s2 2s1 |");
                printf("\n----------------------------------");
            }
            else if (m == 4)
            {
                printf("\t----------------------------------");
                printf("\n\t| Name : Beryllium |");
                printf("\n\t| Symbol : Be |");
                printf("\n\t| Atomic Number : 4 |");
                printf("\n\t| Electronic Configuration :1s2 2s2 |");
                printf("\n----------------------------------");
            }
            else if (m == 5)
            {
                printf("\t----------------------------------");
                printf("\n\t| Name : Boron |");
                printf("\n\t| Symbol : B |");
                printf("\n\t| Atomic Number : 5 |");
                printf("\n\t| Electronic Configuration : 1s2 2s2 2p1 |");
                printf("\n\t----------------------------------");
            }
        }
        else
        {
            goto l2;
        }
    }
    else if (n == 2)
    {
        fflush(stdin);
        printf("\nDo You Want to Exit (Yes/No)");
        printf("\nPress 6 for Yes");
        printf("\nPress 7 for No");

        printf("\nEnter Choice : ");
        scanf("%d", &exit);

        if (exit == 6)
        {
            printf("\nAre You Sure ");
            printf("\nPress 4 for Yes ");
            printf("\nPress 5 for No");

            printf("\nEnter Choice : ");
            scanf("%d", &exit1);

            fflush(stdin);

            if (exit1 == 4)
            {
                printf("\nPeriodic Table has been closed permanently");
            }
            else if (exit1 == 5)
            {
                printf("\nContinue With Searching Of Elements");
                goto l1;
            }
        }
    }
    return 0;
}