#include <stdio.h>

int main()
{
    int arr[7] = {1, 3, 3, 4, 5, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int isSymmetric = 1;
    for (int i = 0; i < n/2; i++)
    {
        
        if (arr[i] != arr[n - i - 1])
        {
            printf("The element at index %d and at index %d are not same.\n", i, n - i - 1);
        }
        else
        {
            printf("The element at index %d and at index %d are same.\n", i, n - i - 1);
        }
    }

    return 0;
}