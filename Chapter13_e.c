#include <stdio.h>

void modify(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] *= 3;
    }
}

int main()
{
    int arr[10] = {11, 69, 58, 65, 44, 35, 78, 98, 65, 98};
    modify(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}