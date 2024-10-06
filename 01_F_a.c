#include <stdio.h>

int main(){
    int temp, farh;
    printf("Enter The Temparature of Your City--->");
    scanf("%d", &temp);
    farh = (temp - 32)* 5 / 9;

    printf("Your City's Temparature in Celsius is---->%d\n", farh);
    return 0;
}