#include <stdio.h>

void cirrot(int arr[], int len, int rotations)
{
    for (int r = 0; r < rotations; r++)
    {
    
    int temp = arr[0];

    for (int i = 0; i < len-1; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    arr[len-1] = temp;

    }
    
}

int main()
{
    int p[5] = {15, 30, 28, 19, 61};
    int len = sizeof(p) / sizeof(p[0]);

    cirrot(p, len, 1);

    for (int i = 0; i < len; i++)
    {
        printf("%d\t", p[i]);
    }
    return 0;
}