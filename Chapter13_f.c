#include <stdio.h>
#include <math.h>

float calculate_mean(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

float calculate_standard_deviation(int arr[], int size)
{
    float mean = calculate_mean(arr, size);
    float variance = 0.0;

    for (int i = 0; i < size; i++)
    {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }

    return sqrt(variance / size);
}

int main()
{
    int arr[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    float std_dev = calculate_standard_deviation(arr, size);
    printf("The standard deviation is: %.2f\n", std_dev);

    return 0;
}
