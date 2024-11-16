#include <stdio.h>

int * fun(int * num);

int * fun(int *num){
    static int arr[] = {10,20,30,40,50};
    *num = sizeof(arr) / sizeof(arr[0]);
    return arr;
}

int main(){
    int max, *p, i;
    p = fun(&max);
    for (int i = 0; i < max; i++)
    {
        printf("%d", p[i]);
    }
    
    return 0;
}