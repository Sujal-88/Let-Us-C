#include <stdio.h>

int shift(int*, int*, int*);

int shift(int* x, int* y, int* z){
    int temp1, temp2;
    temp1 = *x;
    temp2 = *y;
    *y = *z;
    *z = temp1;
    *x = temp2;
}

int main(){
    int a, b, c;
    
    printf("Enter three numbers-->");
    scanf("%d %d %d", &a, &b, &c);

    shift( &a, &b, &c);

    printf("%d %d %d", a, b, c);
    return 0;
}