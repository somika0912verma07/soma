//•	Display Fibonacci Series
#include<stdio.h>
int main()
{
   int count, n, a=0, b=1, Temp=0;  
   printf("Enter The Number of Terms :\n");
   scanf("%d",&n);  
   printf("\nFibonacci Series : %d , %d , ", a, b);
   count=2;  
  do  
    {
       Temp=a+b;
       a=b;
       b=Temp;
       ++count;
       printf("%d , ",Temp);
    }
 while (count<n);
  return 0;
}