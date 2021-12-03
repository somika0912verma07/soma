//•	Temperature Conversion Celsius To Fahrenheit And Vice Versa
#include<stdio.h>
int main()
{
 float a,b,centigrade, fahrenheit;
 int x;
 printf("1. For Fahrenheit To Celsius\n");
 printf("2. For Celsius To Fahrenheit\n");
 printf("\n\nEnter Your Choice\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
    printf("\nEnter The Value of Fahrenheit Temperature: ");
    scanf("%f",&a);
    centigrade=5*(a-32)/9;
    printf("\n\nCelsius Temperature: %f ",centigrade);
    break;
 case 2:
    printf("\nEnter The Value of Celsius Temperature: ");
    scanf("%f",&b);
    fahrenheit=((9*b)/5)+32;
    printf("\n\nFahrenheit Temperature: %f ",fahrenheit);
    break;
    default:
    printf("\n\nWrong Choice.....Try Again!!!\n");
 }
 return(0);
}