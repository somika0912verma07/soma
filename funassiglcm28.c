#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,lcm;
	int LCM (int no1, int no2);
	
	printf("Enter two numbers:");
	scanf("%d %d",&no1,&no2);
	lcm=LCM(no1,no2);
	printf("LCM=%d",lcm);
	getch();
}
int LCM (int no1, int no2)
{
	int lcm;
	if(no1>no2)
	lcm=no1;
	else
	lcm=no2;
	while(lcm%no1!=0 || lcm%no2!=0)
	{
		lcm++;
	}
	return lcm;
}
