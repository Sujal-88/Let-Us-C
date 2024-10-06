#include <stdio.h>
#include <math.h>

int main(){
    int L1, L2, G1, G2, dist;
    printf("Enter the latitudes of your reigon-->");
    scanf("%d %d", &L1, &L2);
    
    printf("Now, Enter the longitudes of your reigon-->");
    scanf("%d %d", &G1, &G2);

    dist = 3963 * acos( sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2-G1));

    printf("The distance as per your entered values is--->%d", dist);
    return 0;
}