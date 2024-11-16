#include <stdio.h>
#include <math.h>

float find_largest(float arr[], int size){
    float max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    } 
    return (float) max;
}

int main(){
    float side_a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float side_b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float angle[6] = {0.78, 0.89, 1.35, 1.57, 1.25, 1.75};
    float area[6];
    int size = sizeof(side_a)/sizeof(side_a[0]);
    
    for (int i = 0; i < 6; i++)
    {
        area[i] = (side_a[i]*side_b[i])*(0.5)*sin(angle[i]);
    }
    
    printf("The areas are comed out to be\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("The area of %d number is %f\n", i+1, area[i]);
    }
    
    float answer = find_largest(area, size);

    printf("\nThe Largest area comed out to be-->%.2f\n", answer);
    return 0;
}