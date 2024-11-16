#include <stdio.h>
#define UTL(z) (z>=65 && z<=90 ? z+32 : z)

int main(){
    char ch;
    printf("Enter a character-->");
    scanf("%c", &ch);
    char new = UTL(ch);
    printf("The O/P is %c", new);
    return 0;
}