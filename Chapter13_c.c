#include <stdio.h>

int smallest(int x[], int size)
{
    int min = x[0];
    for (int i = 1; i < size; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }

    return min;
}

int main()
{
    int a[25] = {1, 2, 3, 4, 5, 6, -1, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int min = smallest(a, 25);
    printf("The smallest element in the array is: %d\n", min);

    return 0;
}