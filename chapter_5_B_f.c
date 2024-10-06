#include <stdio.h>
#include <limits.h>

int main(){
    int n, num, min, max;

    min = INT_MAX;
    max = INT_MIN;
    
    printf("Enter the number of elements-->");
    scanf("%d", &n);

    int i = 0;
    while (i < n)
    {
        printf("Enter the number---->");
        scanf("%d", &num);

        if (num < min)
        {
            min = num;
        }

        if (num > max)
        {
            max = num;
        }
        
        i++;
    }
    
    int range = max - min;
    printf("The range of the entered numbers is : %d\n", range);

    return 0;
}