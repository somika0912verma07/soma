//•	Find LCM of two Numbers
#include <stdio.h>
int main()
{
    int i, num1, num2, max, lcm=1;
    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    i = max;
   do
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
        i += max;
    }
     while(1);
    printf("LCM of %d and %d = %d", num1, num2, lcm);
    return 0;
}