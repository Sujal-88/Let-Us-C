#include <stdio.h>

int sum(int n);

int sum(int n){
   
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int number;
    
    printf("Enter a number-->");
    scanf("%d", &number);

    int result = sum(number);
    printf("The sum of first %d natural numbers is %d\n", number, result);
    
    return 0;
}