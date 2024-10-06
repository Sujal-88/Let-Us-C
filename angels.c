#include <stdio.h>
#include <math.h>

int main(){
    float pi, angle, radians, vsin, vcos, vtan;
    pi = 3.14159265359;

    printf("enter the angle of your triangle-->");
    scanf("%f", &angle);

    radians = angle * (pi / 180);

    vsin = sin(radians);
    vcos = cos(radians);
    vtan = tan(radians);

    printf("The angle measured in sin terms is :%f\n",vsin);
    printf("The angle measured in cos terms is :%f\n",vcos);
    printf("The angle measured in tan terms is :%f\n",vtan);
    return 0;
}