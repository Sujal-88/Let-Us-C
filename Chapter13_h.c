#include <stdio.h>
#include <math.h>

float summing(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};

    int size = sizeof(x) / sizeof(x[0]);

    float first_term[11];
    for (int i = 0; i < size; i++)
    {
        first_term[i] = x[i] * y[i];
    }

    float first_term_new = summing(first_term, size);

    float i, j;
    i = summing(x, size);
    j = summing(y, size);
    float second_term = i * j;

    float x_term_double[11];
    for (int i = 0; i < size; i++)
    {
        x_term_double[i] = x[i] * x[i];
    }

    float y_term_double[11];
    for (int i = 0; i < size; i++)
    {
        y_term_double[i] = y[i] * y[i];
    }

    float k = size * summing(x_term_double, size);
    float l = i * i;

    float m = size * summing(y_term_double, size);
    float n = j * j;

    float answer = (first_term_new - second_term) / sqrt((k - l) * (m - n));

    printf("%.6f", answer);
    return 0;
}