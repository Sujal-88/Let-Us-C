#include <stdio.h>

int main(){
    int ascii_value = 0;

    while (ascii_value <= 255)
    {
        printf("ASCII Value : %d | Character : %c\n", ascii_value, ascii_value);
        ascii_value++;
    }
    
    return 0;
}