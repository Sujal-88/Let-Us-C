#include <stdio.h>
#define AM(x, y) ((1.0/2.0)*(x+y))

int main(){
    int a, b;
    printf("enter two numbers-->");
    scanf("%d %d", &a, &b);
    float k = AM(a, b);
    printf("%f", k);
    return 0;
}