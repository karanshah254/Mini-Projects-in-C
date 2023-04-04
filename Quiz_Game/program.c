#include <stdio.h>
int main()
{
    int i;
    char ans1, ans2, ans3, ans4, ans5;
    int p1, p2, p3, p4, p5;
    int p01, p02, p03, p04, p05;
    int t1, t2, t3;

    p1 = p2 = p3 = p4 = p5 = 0;
    p01 = p02 = p03 = p04 = p05 = 0;

    fflush(stdin);
    printf("\n****Welcome to the Game****");
    printf("\nEnter 7 to Start the Game : ");
    printf("\nEnter 0 to quit the game : \n");
    scanf("%d", &i);
    getchar();

    if (i == 7)
    {
        printf("\nLets Play And Test Your IQ Level");
        printf("\nPress Enter to move on next quuestions");
    }
    else if (i == 0)
    {
        printf("\nGame has been ended");
    }
    else
    {
        printf("\nInvalid Number");
    }

    if (i == 7)
    {
        fflush(stdin);
        printf("\n1). Which one is first search engine on internet ?");
        printf("\nA. Google");
        printf("\nB. Archie");
        printf("\nC. Wais");
        printf("\nD. Altavista");

        printf("\nEnter Answer : ");
        scanf("%c", &ans1);
        getchar();

        if (ans1 == 'B')
        {
            printf("\nCorrect Answer");
            p1 = 5;
            printf("\nYou have scored %d points", p1);
            getchar();
        }
        else
        {
            printf("\nWrong Answer");
            p01 = 0;
            printf("\nYou have scored %d points", p01);
            getchar();
        }

        fflush(stdin);
        printf("\n2) Which one is the first web browser in 1990 ?");
        printf("\nA. Internet Explorer");
        printf("\nB. Mosiac");
        printf("\nC. Mozilla");
        printf("\nD. Nexus");

        printf("\nEnter Answer : ");
        scanf("%c", &ans2);
        getchar();

        fflush(stdin);
        if (ans2 == 'D')
        {
            printf("\nCorrect Answer");
            p2 = 5;
            getchar();
            printf("\nYou have scored %d points", p2);
        }
        else
        {
            printf("\nWrong Answer");
            p02 = 0;
            printf("\nYou have scored %d points", p02);
            getchar();
        }

        fflush(stdin);
        printf("\n3). First Computer Virus is known as ?");
        printf("\nA. Rabbit");
        printf("\nB. Creeper Virus");
        printf("\nC. Elk Cloner");
        printf("\nD. SCA Virus");

        printf("\nEnter Your Answer : ");
        scanf("%c", &ans3);
        getchar();

        fflush(stdin);
        if (ans3 == 'B')
        {
            printf("\nCorrect Answer");
            p3 = 5;
            printf("\nYou have scored %d points", p3);
            getchar();
        }
        else
        {
            printf("\nWrong Answer");
            p03 = 0;
            printf("\nYou have scored %d points", p03);
            getchar();
        }

        fflush(stdin);
        printf("\n4). Firewall in computer is used for : ");
        printf("\nA. Security");
        printf("\nB. Data Transmission");
        printf("\nC. Monitoring");
        printf("\nD. Authentication");

        printf("\nEnter answer : ");
        scanf("%c", &ans4);
        getchar();

        fflush(stdin);
        if (ans4 == 'A')
        {
            printf("\nCorrect answer");
            p4 = 5;
            printf("\nYou have scored %d points", p4);
            getchar();
        }
        else
        {
            printf("\nWrong Answer");
            p04 = 0;
            printf("\nYou have scored %d points", p04);
            getchar();
        }

        fflush(stdin);
        printf("\n5). Which of the following is not database management software ?");
        printf("\nA. MySQl");
        printf("\nB. Oracle");
        printf("\nC.cobal");
        printf("\nD. Sybase");

        printf("\nEnter Answer : ");
        scanf("%c", &ans5);
        getchar();

        fflush(stdin);
        if (ans5 == 'C')
        {
            printf("\nCorrect Answer");
            p5 = 5;
            printf("\nYou have scored %d points", p5);
            getchar();
        }
        else
        {
            printf("\nWrong Answer");
            p05 = 0;
            printf("\nYou have scored %d points", p05);
            getchar();
        }
    }

    fflush(stdin);
    printf("\nTotal Points after playing quiz is : ");
    t1 = p1 + p2 + p3 + p4 + p5;
    t2 = p01 + p02 + p03 + p04 + p05;
    t3 = t1 + t2;

    printf("%d", t3);
    getchar();

    printf("\n|----THANK YOU----|");
    return 0;
}