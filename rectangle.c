#include <stdio.h>

int main(){
    int len, brd, ar, peri;
    
    printf("Enter the length of the rectangle-->");
    scanf("%d", &len);

    printf("Enter the breadth of the rectangle-->");
    scanf("%d", &brd);

    ar = len * brd;
    peri = 2 * (len + brd);

    if (ar>peri)
    {
        printf("The area of the rectangle is greater than it's perimeter.\n");
    }

    else{
        printf("The area of the rectangle is smaller than it's perimeter.\n");
    }
    
    return 0;
}