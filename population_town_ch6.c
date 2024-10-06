#include <stdio.h>

int main()
{
    float population = 100000, increase = 0.1;
    int years = 10;
    for (int i = 1; i <= years; i++)
    {
        population = population + population * increase;
        printf("The popluation of %d year is: %.2f\n", i, population);
    }

    return 0;
}