#include <stdio.h>
//This problem is also known as the 'TOWER OF THE HANOI'
void swap(int n, char source, char target, char auxilary)
{
    if (n == 1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", source, target);
        return;
    }

    swap(n - 1, source, auxilary, target);

    printf("Moved disk %d from peg %c to peg %c\n", n, source, target);

    swap(n - 1, auxilary, target, source);
}

int main()
{
    int n = 4;
    swap(n, 'A', 'B', 'C');
    return 0;
}