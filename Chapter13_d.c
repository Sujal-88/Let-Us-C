#include <stdio.h>

int main()
{
    int arr[5] = {11, 22, 55, 33, 44};
    int temp;
    int size = sizeof(arr)/sizeof(arr[0]); //Here the calulation is being done in the byte wise manner. like 20/4
    printf("%d", size);
    for (int i = 0; i < size-1; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int j = 0; j < size; j++)
    {
        printf("%d\t", arr[j]);
    }

    return 0;
}