// Page NO.72 Q.[E].(c)
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the first number-->");
    scanf("%d", &num1);

    printf("Enter the second number-->");
    scanf("%d", &num2);

    printf("Enter the third number-->");
    scanf("%d", &num3);

    (num1 > num2 && num1 > num3 ? printf("The first number %d is the highest number.\n", num1)
                                : (num2 > num1 && num2 > num3 ? printf("The second number %d is the highest number.\n", num2)
                                                              : (num3 > num1 && num3 > num2 ? printf("The third number %d is the highest number.\n", num3)
                                                                                            : printf("Wrong Input.\n"))));
    /*
        This can also be written as this and it will be a simplified format.
            (num1 > num2 && num1 > num3) ?
        printf("The first number %d is the highest number.\n", num1) :
        (num2 > num1 && num2 > num3) ?
            printf("The second number %d is the highest number.\n", num2) :
            (num3 > num1 && num3 > num2) ?
                printf("The third number %d is the highest number.\n", num3) :
                printf("There is no single highest number.\n");
    */
    return 0;
}