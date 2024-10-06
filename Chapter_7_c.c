#include <stdio.h>

int main()
{
    int grace, sub_fail;
    char class;

    printf("Enter the class waith you have passed-->");
    scanf("%c", &class);

    printf("Enter the how many subjects you have failed-->");
    scanf("%d", &sub_fail);
    /*
    Let's consider there are 5 subjects.
    A-->for first class
    B-->for second class
    C-->for third class
    */
    switch (class)
    {
    case 'A':
        printf("You have passed with %d grace marks and first class\n", (5 - sub_fail) * 5);
        break;
    case 'B':
        printf("You have passed with %d grace marks and second class\n", (5 - sub_fail) * 4);
        break;
    case 'C':
        printf("You have passed with %d grace marks and third class\n", (5 - sub_fail) * 5);
        break;

    default:
        printf("Please enter a valid input\n");
        break;
    }
    return 0;
}