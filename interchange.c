#include <stdio.h>
// This programme can also be done using the 'temp' comand i.e. temporary but as this is not shown here so we will not use the temporary command. But, i have also given the solution in the comments. 
int main(){
    int c, d;
    
    printf("enter the value of c-->");
    scanf("%d", &c);

    printf("enter the value of d-->");
    scanf("%d", &d);

    /*  The temp command will be here;
        temp = c;---> This line shows to which make the temporary change.
        c = d; ----> This line shows to which the 'c' want to swap.
        d = temp; ----> This line swaps the temporary change to the 'd'
        By this step we can also swap the digits by temporary basis.  */

    printf("The content of C --to--> D is %d\n", d);
    printf("The content of D --to--> C is %d\n", c);

    return 0;
}