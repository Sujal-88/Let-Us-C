#include <stdio.h>

int main()
{
    int num = 1;

    for (int j = 1; j <= 10; j++) // How much numbers at a time to print.
    {

        for (int space = 10 - j; space > 0; space--)
        {
            printf(" ");
        }

        for (int i = 1; i <= j; i++)
        {
            printf("%d ", num);
            num++;

            if (num > 10)
                break;
        }

        printf("\n");

        if (num > 10)
            break;
    }

    return 0;
}