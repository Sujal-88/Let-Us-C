//The question is on Page.no. 71 and Q-D-b.
#include <stdio.h>

int main(){
    float R, G, B, Rfactor, Bfactor, Gfactor, Cyan, Magenta, Yellow, Black, White, max;

    printf("Please following value in range of 0 to 255.\n");

//Color Input from the user.
    printf("Enter the value of the Red color-->");
    scanf("%f", &R);

    printf("Enter the value of the Blue color-->");
    scanf("%f", &B);

    printf("Enter the value of the Green color-->");
    scanf("%f", &G);

     if (R < 0 || R > 255 || G < 0 || G > 255 || B < 0 || B > 255) {
        printf("RGB values must be in the range 0 to 255.\n");
        return 1;  // Exit the program if the values are out of range
        }

    else if (R==0 && G==0 && B==0)
    {
        Black = 1;
    }
        

    Rfactor = R / 255;
    Gfactor = G / 255;
    Bfactor = B / 255;

    printf("\nPlease Confirm...!\n Red : %f\n Blue : %f\n Green : %f\n\n", Rfactor, Bfactor, Gfactor);

    //Now we will fetect the highst among them.
    
    max = Rfactor;

    if (max<Gfactor)
    {
        max = Gfactor;
    }
    
    if (max<Bfactor)
    {
        max = Bfactor;
    }
    
    //now we will give the WHite the value of max.
    White = max;

    Cyan = (White - Rfactor) / White;

    Magenta = (White - Gfactor) / White;
    
    Yellow = (White - Bfactor) / White;

    Black = 1 - White;

    printf("the value of the Cyan is : %f\n", Cyan);
    printf("the value of the Magenta is : %f\n", Magenta);
    printf("the value of the Yellow is : %f\n", Yellow);
    printf("the value of the Black is : %f\n", Black);

    return 0;
}