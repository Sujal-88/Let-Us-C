#include <stdio.h>

int main()
{
    float x, y;
    // y varies from 0 to 6
    // x varies from 5.5 to 12.5---> 0.5 incrementation in each.
    // Formula = 'i = 2 + (y + 0.5x)'
    for (x = 1; x <= 6; x++)
    {
        for (y = 1; y < 12.5; y += 0.5)
        {
            printf("I = 2 + (%.2f + 0.5 * %.2f)\n", x, y);
        }
    }

    return 0;
}