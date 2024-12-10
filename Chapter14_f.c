#include <stdio.h>

int main()
{
    int a[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {7, 8, 78, 10, 18, 69},
    };

    int b[6][6] = {
        {7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6},
        {11, 22, 33, 44, 55, 66},
        {13, 14, 15, 16, 17, 18},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18}};

    int sum[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Printing the numbers addition of the 2 matrix of 6x6\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}