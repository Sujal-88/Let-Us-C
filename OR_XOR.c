#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, Y;
        scanf("%d %d", &N, &Y);

        int arr[N];
        int or_all = 0;

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
            or_all |= arr[i];
        }

        if (or_all == Y)
        {
            printf("0\n");
        }
        else
        {
            int x = -1;
            for (int i = 0; i < N; i++)
            {
                int temp_x = Y ^ or_all;

                int new_or = 0;
                for (int j = 0; j < N; j++)
                {
                    new_or |= (arr[j] ^ temp_x);
                }

                if (new_or == Y)
                {
                    x = temp_x;
                    break;
                }
            }
            printf("%d\n", x);
        }
    }

    return 0;
}