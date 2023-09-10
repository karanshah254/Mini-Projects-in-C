#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char choices[] = {'R', 'P', 'S'};
    char playerChoice, computerChoice;
    int playerIndex, computerIndex;

    srand(time(NULL));

    printf("Welcome to Rock-Paper-Scissors Game!\n");
    printf("Enter your choice (R for Rock, P for Paper, S for Scissors): ");
    scanf(" %c", &playerChoice);

    if (playerChoice != 'R' && playerChoice != 'P' && playerChoice != 'S')
    {
        printf("Invalid choice. Please choose R, P, or S.\n");
        return 1;
    }

    computerIndex = rand() % 3;
    computerChoice = choices[computerIndex];

    printf("Your choice: %c\n", playerChoice);
    printf("Computer's choice: %c\n", computerChoice);

    if (playerChoice == computerChoice)

    {
        printf("It's a tie!\n");
    }
    else if ((playerChoice == 'R' && computerChoice == 'S') ||
             (playerChoice == 'P' && computerChoice == 'R') ||
             (playerChoice == 'S' && computerChoice == 'P'))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }

    return 0;
}
