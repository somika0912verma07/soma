#include<stdio.h>
void star();
int main(){
    star();
    return 0;}
    void star(){
int i,j,space;
for(i=9; i>=1 ;i--){
for(space=1;space<i;space++)
printf("  ");
for(j=1;j<=7;j++)
if(i==9 || i==1 || j==1 || j==7)

    printf("*");
else
printf(" ");
{

    printf("\n");
    }
}}