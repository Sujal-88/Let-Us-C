// Page NO.72 Q.[E].(d)
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(){
    float angle_degree, angle_radians, sin_val, cos_val;

    printf("Enter the value of the angle--->");
    scanf("%f", &angle_degree);

    //NOw we will convert degree into radians.
    angle_radians = angle_degree * (PI / 180.0);

    // from here we convert the values in sin and cos format.
    sin_val = sin(angle_radians);
    cos_val = cos(angle_radians);

    //Now we will apply the ternary operation
    
    ( fabs(sin_val + cos_val == 1) ? printf("The angle is perfect angle it's sin and cos addition is 1.\n") : printf("The angle is not a perfect angle and it's sin and cos addition is not equal to 1.\n"));
    
    return 0;
}