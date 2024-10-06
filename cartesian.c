#include <stdio.h>
#include <math.h>

int main(){
    int cart1, cart2, pol1, pol2;
    printf("Enter the cartesians-->");
    scanf("%d %d", &cart1, &cart2);

    pol1 = sqrt(cart1*cart1 + cart2*cart2);
    pol2 =  atan(cart2 / cart1);

    printf("The polar co-ordinates of your entered cartesian co-ordinates are---( %d, %d)", pol1, pol2);
    return 0;
}