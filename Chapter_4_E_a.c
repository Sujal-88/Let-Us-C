#include <stdio.h>

int main(){
    char a, b;

    printf("Enter a character-->");
    scanf("%c", &a);

    if (a<=90 && a>=65)
    {
        printf("The entered character %c is a Uppercase.\n", a);
    }

    else if (a>=97 && a<=122)
    {
        printf("The entered character %c is a Lowercase.\n", a);
    }

    else if (a>=48 && a<=57)
    {
        printf("The enterd character is a number between 0-9.\n");
    }

    else{
        printf("It is a special symbol.\n");
    }
    
    
    
    return 0;
}