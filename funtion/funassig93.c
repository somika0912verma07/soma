//•	Find A Grade Of Given Marks or (Find a Grade of Given Marks Using Switch Case)
#include<stdio.h>
int main()
{
   int marks;
   printf("\n-----------------------------------");
   printf("\nPlease enter The Marks out of 100: ");  
   scanf("%d", &marks);   
   if(marks>100)
   {
    printf("\nYou have entered invalid marks. Try again\n");
   }
   else
   {
   switch(marks/10)
   {
       case 10 :
       case 9 :
           printf("\n Your Grade is: A");
           break;
       case 8 :
           printf("\n Your Grade is: B" );
           break;
       case 7 :
           printf("\n Your Grade is: C" );
           break;
       case 6 :
           printf("\n Your Grade is: D" );
           break;
       case 5 :
           printf("\n Your Grade is: E" );
           break;
       case 4 :
           printf("\n Your Grade is: E--");
           break;
       default :
           printf("\n You Grade is: F or Fail\n");
   }
 }
   return 0;
}
