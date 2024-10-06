#include <stdio.h>
#include <math.h>

int main()
{
    // For 10 years an compound interest problem.
    int king, one, p, q, r, n, a;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter values of p, n, r, q respectively-->");
        scanf("%d %d %d %d", &p, &n, &r, &q);

        king = (1 + (r / q));
        one = pow(king, n * q);
        a = p * one;
        printf("The compound interest is--->%d\n", a);
    }

    return 0;
}