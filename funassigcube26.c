#include<stdio.h>
void fun(){
    int num,sum;
    printf("enter a number:");
    scanf("%d",&num);
    sum=num*num*num;
    printf("you enter value cube=%d \n",sum);
}
int main(){
    fun();
}