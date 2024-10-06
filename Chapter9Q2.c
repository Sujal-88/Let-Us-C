#include <stdio.h>

void weight(float *, float *, float *);

void weight(float *gm, float *ton, float *pond){
    float x;
    printf("Enter the Weight in kilograms-->");
    scanf("%f", &x);
    *gm = x * 1000;
    *pond = x * 2.20462;
    *ton = x * 0.001;
}

int main(){
    float grams, tons, pounds;
    weight(&grams, &tons, &pounds);
    printf("IN Grams:%f\n Tons:%f\n Pounds:%f\n", grams, tons, pounds);
    return 0;
}