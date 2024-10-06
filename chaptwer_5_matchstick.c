#include <stdio.h>

int main()
{
    int man, computer;
    int matchstick = 21;

    while (matchstick > 1)
    {
        printf("Enter the number of matchsticks to pick between 1 to 4 :");
        scanf("%d", &man);

        if (man < 1 || man > 4)
        {
            printf("Invalid Input.\n");
            continue;
        }

        matchstick -= man;

        if (matchstick == 1)
        {
            printf("The computer has won the game.\n");
            break;
        }

        computer = 5 - man;
        printf("computer picks %d matchsticks.\n", computer);
        matchstick -= computer;

        if (matchstick == 1)
        {
            printf("You have won the game.\n");
            break;
        }

        printf("Remaining matchticks : %d\n", matchstick);
    }

    return 0;
}