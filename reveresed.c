#include <stdio.h>

int main(){
    int num, reversed=0, digit, original; 
    //By this step we will get a five digit number.
    printf("Enter a five digit number-->");
    scanf("%5d", &num);

    //We will check whether a number is a five digit or not.
    if (num<10000 && num>99999)
    {
        printf("OOOPS..!, Please enter a five digit number.\n");
        return 1; // this shows a exit with a error code.
    }
    
    original = num; //This wll store the original number.
    
    //Now we will reverse the number.

    while (num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    
    
    //Noe we will print the reversed number.
    printf("The reversed number of entered number is :%d\n", reversed);
    
    //Now we will check if the entered number and reversed number is equal or not.
    if (reversed==original)
    {
        printf("The entered number and the reversed number is equal.\n");
    }
    else{
        printf("The entered number and the reversed number are not equal.\n");
    }
    return 0;
}