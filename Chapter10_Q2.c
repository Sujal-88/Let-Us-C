#include <stdio.h>

void p_binary(int n)
{
    if (n > 1)
    {
        p_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int number;

    printf("Enter A number-->");
    scanf("%d", &number);
    printf("Binary Equivalent: ");
    if (number == 0)
    {
        printf("0");
    }
    else
    {
        p_binary(number);
    }
    printf("\n");

    return 0;
}