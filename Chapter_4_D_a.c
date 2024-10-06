//Page No.71 [D]. (a) Triangle question
#include <stdio.h>
#include <math.h>

int main(){
    int s1, s2, s3;

    printf("Enter the 1st side of the triangle-->");
    scanf("%d", &s1);

    printf("Enter the 2nd side of the triangle-->");
    scanf("%d", &s2);

    printf("Enter the 3rd side of the triangle-->");
    scanf("%d", &s3);
if (s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
{
    

    if (s1==s2 && s1==s3)
    {
        printf("It is a equilateral triangle.\n");
    }
    
    else if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("It is a isosceles triangle.\n");
    }

    else
    {
        printf("It is a scalene triangle.\n");
    }
    
    if ( (pow(s1,2) + pow(s2,2) == pow(s3, 2)) || (pow(s1,2) + pow(s3,2) == pow(s2, 2)) || (pow(s2,2) + pow(s3,2) == pow(s1, 2)))
    {
        printf("It is a Right Angled Triangle.\n");
    }

}
    else{
        printf("The Sides do not form a valid trianglr.\n");
    }
    
    return 0;
}