
/*

One of the best pattern program i have solved ever .

Eg:1
Enter number : 7

Output :

7 7 7 7 7 7 7 7 7 7 7 7 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 2 1 2 3 4 5 6 7
7 6 5 4 3 2 2 2 3 4 5 6 7
7 6 5 4 3 3 3 3 3 4 5 6 7
7 6 5 4 4 4 4 4 4 4 5 6 7
7 6 5 5 5 5 5 5 5 5 5 6 7
7 6 6 6 6 6 6 6 6 6 6 6 7
7 7 7 7 7 7 7 7 7 7 7 7 7

Eg : 2

Enter Number : 4

Output :

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

#include <stdio.h>

int main()
{
    int n;

    printf("\nEnter Number : ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int min = i < j ? i : j;
            min = min < 2 * n - i ? min : 2 * n - i; // Use of ternary operator
            min = min < 2 * n - j ? min : 2 * n - j; // Use of ternary operator
            printf(" %d ", n - min + 1);
        }

        printf("\n");
    }
}