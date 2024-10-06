#include <stdio.h>
#include <math.h>
//  BMI Question Page.No.72 (d).
int main()
{
    float wght, height, nxt_height, BMI;

    printf("Enter your weight in KG-->");
    scanf("%f", &wght);

    printf("Enter your height in metres(m)-->");
    scanf("%f", &height);

    BMI = wght / (height * height);

    if (wght <= 0 || height <= 0)
    {
        printf("Invalid input. Weight and height must be positive.\n");
        return 1; // Exit with an error code
    }

    if (BMI < 15)
    {
        printf("You are in Starvation condition.\n");
    }

    else if (BMI >= 15 && BMI <= 17.5)
    {
        printf("You are in Anorexic condition.\n");
    }

    else if (BMI > 17.5 && BMI <= 18.5)
    {
        printf("You are in Underweight condition.\n");
    }

    else if (BMI > 18.5 && BMI <= 24.9)
    {
        printf("You are a ideal condition.\n");
    }

    else if (BMI >= 25 && BMI <= 29.9)
    {
        printf("You are in Overweight condition.\n");
    }

    else if (BMI >= 30 && BMI <= 30.9)
    {
        printf("You are a Obese guy.\n");
    }

    else if (BMI >= 40)
    {
        printf("You are a Morbidly Obese guy.\n");
    }

    return 0;
}