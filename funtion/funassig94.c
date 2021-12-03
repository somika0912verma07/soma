//•	Find Radius, Circumference and Volume of Cylinder
#include<stdio.h>
int main()
{
    float radius=0.0,height=0.0;
    char quit;
    int choice;
    const float pi=3.1415658;
do
{
    printf("\n **"); 
    printf("\nWhat Do You Want To Calculate?");
    printf("\n1. For Area of Circle");
    printf("\n2. For Circumference of Circle");
    printf("\n3. For Volume of Cylinder");
    printf("\n0. For For Quit");
    printf("\n**\n");
    printf("\nEnter Your Choice Here:");
    scanf("%d",&choice);
switch (choice)
{
case 1:
 printf("\nEnter Radius of Circle:");
 scanf("%f",&radius);
 printf("\n**");
    printf("\nArea of Circle = %.5f",radius*radius*pi);
    printf("\n**");
   break;
case 2:
    printf("\nEnter Radius of Circle:");
    scanf("%f",&radius);
    printf("**");
    printf("\nCircumference of Circle = %.5f",2*radius*pi);
    printf("\n**");
    break;
case 3:
    printf("\nEnter Radius of Cylinder:");
    scanf("%f",&radius);
    printf("\nEnter Hight of Cylinder:");
    scanf("%f",&height);
    printf("\n**");
    printf("\nVolume of cylinder = %.5f",radius*radius*pi*height);
    printf("\n**");
    break;
case 0:
    quit='y';
    break;
default:
 printf("\n**");
    printf("\ninvaid Choice....Try Again\n");
    printf("**");
   break;
}
}while(quit != 'y');
return 0;
}
