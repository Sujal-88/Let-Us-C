#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float cond1, cond2, cond3;
    float tolerance = 0.000001; // A small tolerance value

    for (float a = 1; a <= 30; a++)
    {
        for (float b = 1; b <= 30; b++)
        {
            for (float c = 1; c <= 30; c++)
            {
                cond1 = fabs(pow(a, 2) + pow(b, 2) - pow(c, 2)) < tolerance;
                cond2 = fabs(pow(a, 2) + pow(c, 2) - pow(b, 2)) < tolerance;
                cond3 = fabs(pow(b, 2) + pow(c, 2) - pow(a, 2)) < tolerance;
                if (cond1 || cond2 || cond3)
                {
                    printf("The triplet is: %.2f  %.2f  %.2f\n", a, b, c);
                }
            }
        }
    }

    return 0;
}