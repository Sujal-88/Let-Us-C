#include <stdio.h>

void Prime_Factors(int num);

void Prime_Factors(int num)
{
    while (num % 2 == 0)
    {
        printf("%d\n", 2);
        num /= 2;
    }
    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            printf("%d\n", i);
            num /= i;
        }
    }
    if (num > 2)
    {
        printf("%d\n", num);
    }
}

int main()
{
    int num;
    printf("Enter a Number-->");
    scanf("%d", &num);

    printf("Prime Factors of %d are :\n", num);
    Prime_Factors(num);
    return 0;
}