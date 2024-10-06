#include <stdio.h>

void print_binary(int n)
{
    int binary[32];
    int i = 0;

    if (n == 0)
    {
        printf("0");
        return;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main()
{
    int number;

    printf("Enter a number-->");
    scanf("%d", &number);

    printf("Bindary Equivalent: ");

    print_binary(number);
    return 0;
}