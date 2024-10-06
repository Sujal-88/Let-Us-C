#include <stdio.h>

int main(){
    int num, d1, d2, d3, d4, d5;
    printf("PLease Enter a five digit number-->");
    scanf("%d", &num);

    d5 = num%10; //This gives the last digit to us as by divimg by 10 the remainder would be last digit.
    num = num/10; //By this step we will get a removed last digit as by 0.1 Effect of 10^-1.

    d4 = num%10;
    num = num/10;

    d3 = num%10;
    num = num/10;

    d2 = num%10;
    num = num/10;

    d1 = num%10;
    num = num/10;

    printf("The multiplication of the entered digits is--->%d", d1*d2*d3*d4*d5);

    return 0;
}