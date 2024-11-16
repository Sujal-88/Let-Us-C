#include <stdio.h>
#define ABS(x) (x<0 ? (-x) : x)

int main(){
    int a;
    printf("Enter a number-->");
    scanf("%d", &a);

    int z = ABS(a);
    printf("The absoulute value of the number is-->%d", z);
    return 0;
}