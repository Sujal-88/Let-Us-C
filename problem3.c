#include <stdio.h>

int main(){
    int total, amount, noone, notwo, nofive, noten, nofifty, nohund;
    printf("Please Enter your amount--->");
    scanf("%d", &amount);

    nohund = amount / 100;
    amount = amount % 100;

    nofifty = amount / 50;
    amount = amount % 50;

    noten = amount / 10;
    amount = amount % 10;

    nofive = amount / 5;
    amount = amount % 5;

    notwo = amount / 2;
    amount = amount % 2;

    noone = amount / 1;

    total = noone + notwo + nofive + noten + nofifty + nohund;

    printf("The minimum number of notes which I can provide to you is---->%d", total);
    return 0;
}
