#include <stdio.h>

int main(){
    int s1, s2, s3, s4, s5, aggr;
    float  perc;
    
    printf("Enter The Marks Of the Subject 1---->");
    scanf("%d", &s1);

    printf("Enter The Marks Of the Subject 2---->");
    scanf("%d", &s2);

    printf("Enter The Marks Of the Subject 3---->");
    scanf("%d", &s3);

    printf("Enter The Marks Of the Subject 4---->");
    scanf("%d", &s4);

    printf("Enter The Marks Of the Subject 5---->");
    scanf("%d", &s5);

    aggr = s1 + s2 + s3 + s4 + s5;
    perc = aggr/5;

    printf("Aggregate Marks Are---->%d\n", aggr);
    printf("Percentage Marks Are---->%f\n", perc);
    return 0;
}