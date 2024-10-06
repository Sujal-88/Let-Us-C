#include <stdio.h>

int main(){
    int x, y;
    
    printf("Enter points ( x, y )--->");
    scanf("%d %d", &x, &y);

     if (x == 0 && y == 0) {
        printf("The point lies on both the x-axis and y-axis (origin).\n");
    } 
    else if (x == 0) {
        printf("The point lies on the y-axis.\n");

    } 
    else if (y == 0) {
        printf("The point lies on the x-axis.\n");

    } 
    else {
        printf("The point does not lie on either axis.\n");

    }
    
    return 0;
}