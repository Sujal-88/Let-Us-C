#include <stdio.h>

int main()
{
    int decimal_num, remainder;

    printf("Enter a number --> ");
    scanf("%d", &decimal_num);

    printf("Octal Equivalent in Reverse Order: ");
    while (decimal_num != 0)
    {
        remainder = decimal_num % 8;
        printf("%d", remainder);
        decimal_num /= 8;
    }

    printf("\n");

    return 0;
}
