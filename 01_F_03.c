#include <stdio.h>

int main(){
    int l, b, ln, bn;
    l=1189;
    b=841;
    ln=594;
    bn=841;

    printf("The Formats For The Papers From the A0 to A8 is--->\n");

    printf("The Size Format for A0--> %dmm X %dmm\n\n",  1189, 841);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", ln/2, bn);

    printf("The Size Format for A1--> %dmm X %dmm\n\n", 841, 594);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 841 / 2, 594);

    printf("The Size Format for A2--> %dmm X %dmm\n\n",594 , 420);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 594/2, 420);

    printf("The Size Format for A3--> %dmm X %dmm\n\n", 420, 297);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 420/2, 297);

    printf("The Size Format for A4--> %dmm X %dmm\n\n", 297, 210);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 297/2, 210);

    printf("The Size Format for A5--> %dmm X %dmm\n\n", 210, 148);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 210/2, 148);
    

    printf("The Size Format for A6--> %dmm X %dmm\n\n", 105, 148);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 148/2, 105);
    

    printf("The Size Format for A7--> %dmm X %dmm\n\n", 105, 74);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 105/2, 74);
    

    printf("The Size Format for A8--> %dmm X %dmm\n\n", 74, 52);
    printf("<-----But, If  you Cut it  into half i.e. parallel to length, The Format becomes---> %dmm X %dmm\n\n", 74/2, 52);
    

    return 0;
}