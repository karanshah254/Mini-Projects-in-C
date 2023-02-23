#include<stdio.h>
#include<stdlib.h>
void number();


int main()

{
    int n,us;
    int comp_nu;
    int count=0,count1=0;

    printf("\nEnter Limit of Guessing :  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\nEnter User's Number : ");
        scanf("%d",&us);

        comp_nu=rand()%100 +1;

        printf("\nComputer's Selected Number --> %d",comp_nu);

        if(us==comp_nu)
        {
            printf("\n|---User Win---|");
            count+=1;
        }
        else{
            printf("\n|---Computer Win---|");
            count1+=1;
        }


    }
    printf("\n-- User Score-- |-- Computer Score --|");
    printf("\n       %d       |          %d",count,count1);
    printf("\n       %d       |          %d",count,count1);
    printf("\n       %d       |          %d",count,count1);
}