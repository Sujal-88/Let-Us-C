#include <stdio.h>

int main(){
    float rad, len, brd, area, peri, cera, circum;
    area = len*brd;
    peri = (len+brd)*2;
    cera = 3.14*rad*rad;
    circum = 2*3.14*rad;
    printf("Enter Radius of Circle-->");
    scanf("%f", rad);

    printf("Enter Breadth of Rectangle-->");
    scanf("%f", brd);

    printf("Enter Length of Rectangle-->");
    scanf("%f", len);


    printf("The Area Of the Rectangle is %f", area);
    printf("The Perimeter Of the Rectangle is %f", peri);
    printf("The Area Of the Circle is %f", cera);
    printf("The Circumference Of the Circle is %f", circum);
    return 0;
}