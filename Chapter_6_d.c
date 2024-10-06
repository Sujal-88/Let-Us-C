#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    double a, b, sum, po;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    a = (double)(x - 1) / x;
    b = a / 2.0;
    sum = a;  // Start the sum with the first term

    for (int i = 2; i <= 6; i++)
    {
        po = pow(b, i);
        sum += po;
    }
    
    printf("The final sum of the series is: %lf\n", sum);

    return 0;
}
