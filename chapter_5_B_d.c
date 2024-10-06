#include <stdio.h>

int main()
{
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y')
    {
        printf("Enter a number-->");
        scanf("%d", &num);

        if (num > 0)
        {
            positive++;
        }

        else if (num < 0)
        {
            negative++;
        }

        else
        {
            zero++;
        }

        printf("Do you want to enter another number....? (y/n)");
        scanf(" %c", &choice); // Here you have to enter the answe yes for 'Y' or 'y'
    }

    printf("\nThe number of positives--->%d\n", positive);
    printf("\nThe number of negatives--->%d\n", negative);
    printf("\nThe number of zeroes--->%d\n", zero);

    return 0;
}