 #include <stdio.h>
 
 int main(){
    int num = 0, temp, remainder, sum;

    while (num <= 500)
    {
        sum=0;
        temp=num;

        while (temp != 0)
        {
            remainder = temp % 10;
            sum += remainder*remainder*remainder;
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d is a Armstrong Number.\n", num);
        }
        
        

        num++;
    }
    
   
    return 0;
 }