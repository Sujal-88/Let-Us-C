#include <stdio.h>

int main() {
    char ch;
    int lowercase = 0, uppercase = 0, digits = 0;

    printf("Enter characters (Press Enter to stop):\n");

while (scanf(" %c", &ch) == 1) {
        if (ch == '\n') {
            break;
        }
 
        else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
        }

        else if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
        }

        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
    }

    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Digits: %d\n", digits);

    return 0;
}
