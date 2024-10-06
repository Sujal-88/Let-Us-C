#include <stdio.h>
#include <math.h>

int main()
{
    float n_r, r_num = 1729, q1, q2;
    for (int i = 1; i <= 100; i++)
    {
        q1 = pow(i, 3);
        for (int j = 1; j <= 100; j++)
        {
            q2 = pow(j, 3);
            for (int k = 1000; k <= 3000; k++)
            {
                if (q1 + q2 == k)
                {
                    printf("\t%d %d == %d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}