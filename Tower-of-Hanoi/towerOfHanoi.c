/*

Let is say source is tower A destination is tower C and auxilary/helping is tower B
Move disk one by one in the same order and final to tower C / destination, the same way in which firts A was .

*/
#include <stdio.h>

// Function to move a disk from source to destination
void towerOfHanoi(int no_of_disks, char source, char auxiliary, char destination)
{
    if (no_of_disks == 1)
    {
        printf("\nMove disk 1 from tower %c to tower %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary using destination as auxiliary
    towerOfHanoi(no_of_disks - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg
    printf("\nMove disk %d from tower %c to tower %c\n", no_of_disks, source, destination);

    // Move the n-1 disks from auxiliary peg to destination using source as auxiliary
    towerOfHanoi(no_of_disks - 1, auxiliary, source, destination);
}

int main()
{
    int no_of_disks;
    char source = 'A', auxiliary = 'B', destination = 'C';

    printf("\nEnter Number of Disks for movement : ");
    scanf("%d", &no_of_disks);

    towerOfHanoi(no_of_disks, source, auxiliary, destination);

    return 0;
}
