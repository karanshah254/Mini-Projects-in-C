#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct employee
{
    int id;
    char name[50];
    char interest[50];
    char post[50];
};

int main()
{
    struct employee p[50];
    int i, n;

    fflush(stdin);

    printf("\nEnter Exact Number of New Employee's : ");
    scanf("%d", &n);

    printf("\nEnter Details of New Employee's");

    fflush(stdin);

    for (int i = 0; i < n; i++)
    {
        fflush(stdin);

        printf("\nEnter ID of Employee %d : ", i + 1);
        scanf("%d", &p[i].id);

        fflush(stdin);
        printf("\nEnter Name of Employee %d : ", i + 1);
        scanf("%[^\n]", &p[i].name);

        fflush(stdin);
        printf("\nEnter Employee %d Domain of Interest : ", i + 1);
        scanf("%[^\n]", &p[i].interest);

        fflush(stdin);
        printf("\nEnter Employee %d's Post given : ", i + 1);
        scanf("%[^\n]", &p[i].post);
    }

    printf("\n");
    printf("\n|----> All The Details of New Employees Are <----| : ");

    printf("\nID\tFull Name\tGiven Post\t\tDomain Of Interest\n");
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {

        printf("%d\t%s\t%s\t%s\n", p[i].id, p[i].name, p[i].post, p[i].interest);

        printf("\n");
    }
}