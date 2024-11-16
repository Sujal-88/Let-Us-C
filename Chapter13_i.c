#include <stdio.h>
#include <math.h>

typedef struct 
{
    float x, y;
} Point;

float calculate_distance(Point p1, Point p2){
    return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
}

int main(){
    int n = 10;
    Point points[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter coordinates for point %d ( x, y): ", i+1);
        scanf("%f %f", &points[i].x, &points[i].y);
    }
    
    float totaldistance = 0;
    for (int i = 0; i < n; i++)
    {
        totaldistance += calculate_distance(points[i-1], points[i]);
    }
    
    printf("The total distance from first point to last point is %f\n", totaldistance);
    return 0;
}