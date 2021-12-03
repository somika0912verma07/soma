#include<stdio.h>

int isArmstrong(int number) 
{

  // declare variables
  int lastDigit = 0;
  int power = 0;
  int sum = 0;

  // temporary variable to store number
  int n = number;

  {
 do
 {
   /* code */
 } while ({/* condition */});
 
     // find last digit
     lastDigit = n % 10;

     // find power of digit (order = 3)
     power = lastDigit*lastDigit*lastDigit;

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }
 while(n!=0)
  if(sum == number) return 0;
  else return 1;
}

int main()
{
  int number;

  printf("Enter number: ");
  scanf("%d",&number);

  if(isArmstrong(number) == 0)
  printf("%d is an Armstrong number.\n", number);
  else
  printf("%d is not an Armstrong number.", number);

  return 0;
}