#include <stdio.h>
#include "interest.h"

int main(){
    int b, c;
    float a;
    printf("Enter the principal-->");
    scanf("%d", &b);
    printf("Enter the rate-->");
    scanf("%f", &a);
    printf("Enter the years-->");
    scanf("%d", &c);
    float ans = SI(b, c, a);
    int amnt = AMOUNT(ans, b);
    printf("The Simple Interest is %f\n", ans);
    printf("The Amount is %d\n", amnt);
    return 0;
}