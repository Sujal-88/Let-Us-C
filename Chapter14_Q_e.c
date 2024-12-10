#include <stdio.h>
#include <stdbool.h>

// We check the symmetric by the number of columns and rows of a matrix

bool isSquare(int rows, int columns){
    return rows == columns;
}

int main(){
    int rows = 3, column = 3;
    printf("%s\n", isSquare(rows, column) ? "Yes it is a Symmetric" : "It is not symmetric");
    
    return 0;
}