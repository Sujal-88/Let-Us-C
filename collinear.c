#include <stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3, colli1, colli2, colli3, colli4;
    
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    
    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    colli1 = ( y2 - y1 )/( x2 - x1 );
   
    colli2 = ( y3 - y2 )/( x3 - x2 );

    colli3 = ( x3 - x2 )*( y2 - y1 );

    colli4 = ( x2 - x1 )*( y3 - y2 );

    if (colli1==colli2 && colli3==colli4)
    {
        printf("The Entered points are co-llinear.\n");
    }
    
    else{
        printf("The Entered Co-ordinates are not co-llinear.\n");
        }
    return 0;
}