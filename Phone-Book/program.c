

/*

This C Program is general form of "How we add New Contact on our mobile phones" .

Here I had taken upto two contacts only .

User can further add more features too .

*/

#include <stdio.h>
int main()
{
    fflush(stdin);
    int a, p, d, ag, ph, da;
    char n[100], add[100], addr[100], na[100];
    int x, y;

    fflush(stdin);
    printf("\n*****Welcome To Phone Book*****");
    printf("\nPress 1 to Add the Contact");
    printf("\nPress 2 to Exit from the Phone Book");

    fflush(stdin);
    printf("\nEnter User's Choice Number : ");
    scanf("%d", &x);

    fflush(stdin);
    if (x == 1)
    {
        fflush(stdin);
        printf("\nEnter Number of Contacts to be added : ");
        scanf("%d", &y);

        if (y == 1)
        {
            fflush(stdin);
            printf("\nYou Can Only Add 1 Contact");
            printf("\n--------------------------");

            fflush(stdin);
            printf("\nName of Person : ");
            scanf("%c", &n);

            fflush(stdin);
            printf("\nEnter Age : ");
            scanf("%d", &a);

            fflush(stdin);
            printf("\nEnter Phone Number : ");
            scanf("%d", &p);

            fflush(stdin);
            printf("\nEnter Date of Birth : ");
            scanf("%d", &d);

            fflush(stdin);
            printf("\nEnter Residants Address : ");
            scanf("%c", &add);
        }
        else if (y == 2)
        {
            fflush(stdin);
            printf("\nAdd 1st Contact");
            printf("\n--------------------------");

            fflush(stdin);
            printf("\nName of Person : ");
            scanf("%c", &n);

            fflush(stdin);
            printf("\nEnter Age : ");
            scanf("%d", &a);

            fflush(stdin);
            printf("\nEnter Phone Number : ");
            scanf("%d", &p);

            fflush(stdin);
            printf("\nEnter Date of Birth : ");
            scanf("%d", &d);

            fflush(stdin);
            printf("\nEnter Residants Address : ");
            scanf("%c", &add);

            fflush(stdin);
            printf("\nAdd 2nd Contact");
            printf("\n--------------------------");

            fflush(stdin);
            printf("\nName of Person : ");
            scanf("%c", &na);

            fflush(stdin);
            printf("\nEnter Age : ");
            scanf("%d", &ag);

            fflush(stdin);
            printf("\nEnter Phone Number : ");
            scanf("%d", &ph);

            fflush(stdin);
            printf("\nEnter Date of Birth : ");
            scanf("%d", &da);

            fflush(stdin);
            printf("\nEnter Residants Address : ");
            scanf("%c", &addr);
        }
        // For Understanding Purpose I had Taken Till 2 Contacts only .
    }
    else if (x == 2)
    {
        printf("\nYou Have Save Zero Contacts");
        goto l1;
    }
l1:
    return 0;
}

/*

A Simple Phone Booth Created By 1 Year Computer Student

*/