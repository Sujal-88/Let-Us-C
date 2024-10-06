#include <stdio.h>

int main(){
    int ram, sham, ajay;
    printf("Hey, Ram Please enter your age-->");
    scanf("%d", &ram);
    
    printf("Hey, Shyam, Please enter your age-->");
    scanf("%d", &sham);
    
    printf("Hey, Ajay Please enter your age-->");
    scanf("%d", &ajay);

    if (ram>sham && ram>ajay)
    {
        printf("Among all Ram is the oldest and will become your team leader.\n");
    }

    if (sham>ram && sham>ajay)
    {
        printf("Among all Sham is the oldest and will become your team leader.\n");
    }

    if (ajay>sham && ajay>ram)
    {
        printf("Among all Ajay is the oldest and will become your team leader.\n");
    }
    
    return 0;
}