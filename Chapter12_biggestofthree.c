#include <stdio.h>
#define BIG(x, y, z) (x>y && x>z ? printf("The greatest number is %d", x) : (y>z && y>x ? printf("%d is greatest", y) : (z>x && z>y ? printf("%d is greatest number", z) : printf("error"))))

int main(){
    int a, b ,c;
    scanf("%d %d %d", &a, &b, &c);
    BIG(a, b, c);
    return 0;
}