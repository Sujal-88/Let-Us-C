 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    int num;
    printf("Enter a number-->");
    scanf("%d", &num);
        //Absolute value in simple words is modulus. Even if a -ve number is input it shows positive. We can also do it by a if-else condition but here iam using #include <stdlib.h> and then use the abs() function.
    int absValue = abs(num);
    //This can also be done by the #include <math.h> library's "fabs();" function.
    /*
        #include <math.h>

        int absValue = fabs(num);
    */
    printf("The Absolute Value of %d is-->%d", num, absValue);
    return 0;
 }