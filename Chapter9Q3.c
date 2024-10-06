#include <stdio.h>
#include <math.h>

void distance(float *x1, float *x2, float *y1, float *y2, float *distance)
{
    *distance = sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
}

void area(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3, float *triangle_area)
{
    *triangle_area = fabs((*x1 * (*y2 - *y3) + *x2 * (*y3 - *y1) + *x3 * (*y1 - *y2)) / 2.0);
}

int main()
{
    float x1, x2, x3, y3, y1, y2, z1, z2;
    float area_of_triangle, dist;

    printf("Enter coordinates of point A (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of point B (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of point C (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    distance(&x1, &y1, &x2, &y2, &dist);

    printf("Distance between A and B: %f\n", dist);
    area(&x1, &y1, &x2, &y2, &x3, &y3, &area_of_triangle);
    printf("Area of the triangle: %f\n", area_of_triangle);
    return 0;
}