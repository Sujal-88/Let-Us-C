#include <stdio.h>

int main()
{
    int time;
    for (int i = 0; i <= 24; i++)
    {
        if (i <= 4 || i == 0)
        {
            printf("TIME IS: 0%d:00 Midnight\n", i);
        }
        if (i <= 6 && i > 4)
        {
            printf("TIME IS: 0%d:00 Noon\n", i);
        }
        if (i <= 12 && i > 6)
        {
            printf("TIME IS: %d:00 AM\n", i);
        }
        if (i <= 24 && i > 12)
        {
            printf("TIME IS: %d:00 PM\n", i);
        }
    }

    return 0;
}