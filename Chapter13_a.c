#include <stdio.h>

int isPositive(int n)
{
    if (n > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int array[25];
    int positive = 0, even = 0, odd = 0, negative = 0;

    for (int i = 0; i < 25; i++)
    {
        printf("Enter %d element-->");
        scanf("%d", &array[i]);
        if (isPositive(array[i])==1)
        {
            positive++;
        }
        else if (isPositive(array[i])==0)
        {
            negative++;
        }

        if (isEven(array[i])==1)
        {
            even++;
        }
        else if (isEven(array[i])==0)
        {
            odd++;
        }
    }
    printf("\nThere are %d Positive and %d Negative Elements.\n\t%d are Even and %d are Odd\n", positive, negative, even, odd);
    return 0;
}