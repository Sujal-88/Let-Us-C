#include <stdio.h>
#include <math.h>

int main(){
    int x, x2, y, y2, h, k, term1, term2, area, rad, radius, r;
    
    printf("Enter The Points of centre of Circle : ( h, k )-->");
    scanf("%d %d", &h, &k);

    printf("Enter The End Points of Circle : ( x, y )-->");
    scanf("%d %d", &x, &y);

    printf("Enter The Radius of Circle :-->");
    scanf("%d", &r);

    term1 = (x - h);
    term2 = (y - k);

    x2 = pow( term1, 2);
    y2 = pow( term2, 2);

    rad = sqrt(x2 + y2);  

    radius = r*r;

    if (rad>radius)
    {
        printf("The point lies outside of the circle.\n");
    }
    
    else
    {
        if (rad<radius)
        {
        printf("The point lies inside the circle.\n");
        }
        
    }
    
    return 0;
}