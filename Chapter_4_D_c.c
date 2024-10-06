#include <stdio.h>

int main(){
    float hardness, cc, tns_strngth;

    printf("Enter the Hardness of the steeel-(Between 1 to 50)->");
    scanf("%f", &hardness);
    
    printf("Enter the Carbon-Content of the steeel-(Between 0 to 0.7)->");
    scanf("%f", &cc);
    
    printf("Enter the Tensile Strength of the steeel-(Greater than 5600)->");
    scanf("%f", &tns_strngth);

    if (hardness>50 && cc<0.7 && tns_strngth>5600)
    {
        printf("This steel is of 'GRADE 10' as requirements have met.\n");
    }

    else if (hardness>50 && cc<0.7)
    {
        printf("This steel is of 'GRADE 9' as requirements have met. Improve it's Tensile Strength.\n");
    }

    else if (cc<0.7 && tns_strngth>5600)
    {
        printf("This steel is of 'GRADE 8' as requirements have met. Improve it's Hardness.\n");
    }
    
    else if (hardness>50 && tns_strngth>5600)
    {
        printf("This steel is of 'GRADE 7' as requirements have met. Improve it's Carbon-content.\n");
    }

    else if (hardness>50 || cc<0.7 || tns_strngth>5600)
    {
        printf("This steel is of 'GRADE 6' as requirements have met. Please Try to Remake it and met remaining two requirements.\n");
    }
    
    else
    {
        printf("The Steel is of grade 5. Please focus all of the requirements and Try to remake steel in better quality.\n");
    }
    
    return 0;
}