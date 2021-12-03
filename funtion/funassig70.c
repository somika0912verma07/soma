//•	Check Whether a Number is A Palindrome or Not
#include <stdio.h>
int main()
{
    int n, num, rev = 0;
    printf("Enter any number to check if it is palindrome or not: ");
    scanf("%d", &n);
    num = n; 
   do
    {
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }
     while(n != 0);
    if(rev == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }
     
    return 0;
}
