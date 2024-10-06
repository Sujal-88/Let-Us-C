#include <stdio.h>

int main(){
    int a1, a2, a3;
    printf("Enter The first angle of the triangle-->");
    scanf("%d", &a1);
    
    printf("Enter The second angle of the triangle-->");
    scanf("%d", &a2);
    
    printf("Enter The third angle of the triangle-->");
    scanf("%d", &a3);

    if (a1 + a2 + a3 == 180)
    {
        printf("It is a valid triangle as per inputs.\n");
    }
    
    else
        printf("It is not a valid triangle as per inputs.\n");
    return 0;
}