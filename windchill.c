#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
    float wcf, wind, temp;
    
    printf("Enter the temparature of the wind in fareinheit-->");
    scanf("%f", temp);

    printf("Enter the Velocity of the wind-->");
    scanf("%f", wind);

    
    wcf = 35.74 + 0.6215*temp +  (0.4275*temp - 35.75) * pow(wind,0.16);
 

    printf("The Wind Chill Factor of your area in fareinheit is : %.2f", wcf);
    return 0;
}