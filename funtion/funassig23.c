//the number is positive or nagative
#include<stdio.h>
void pn();
void pn(){
 int a;
 printf("Enter a numbers:\n");
 scanf("%d",&a);
if(a>0)
  printf("Number is positive: %d\n",a);
else if(a<0)
      printf("Number is negative: %d\n",a);
     else
       printf("Number is nor positivea neither negative: %d\n",a);


}
int main(){
  pn();
return 0;
}