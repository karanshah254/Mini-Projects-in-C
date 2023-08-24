#include <stdio.h>

int main()
{
    int arr[11];
    int number = 0, i;

    printf("\nEnter Numbers in an array : \n");

    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 11; i++)
    {
        number = number ^ arr[i];
    }

    printf("\nAnswer is : %d", number);
}

/* Question is :

arr[] = {1,1,2,2,3,3,3,4,5,5,6,6}

Using EX-OR operator print number which comes only once in entire array .

example : 1 ^ 1 = 0 , 2 ^ 2 = 0 , 1 ^ 4 = 4

from above array answer is 4 .

*/