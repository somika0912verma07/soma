//•	Calculate Sum of Natural Numbers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    i=1;
   do
    {
        sum+=i;   
        i++;
    }
     while(i<=num);
    printf("Sum of numbers are: %d",sum);
    return 0;
}