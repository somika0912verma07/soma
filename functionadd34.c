#include<stdio.h>
int data=100;
void f1();
void f2();
void f3(int);
void f1(){
    int data=20;
    data=data+10;
    printf("%d",data);
}
void f2(){
    printf("%d",data);
    printf("%d",(data+20));
}
void f3(int data){
    data=data+30;
    printf("%d",data);
}
int main(){
    f1();f2();
    {
        int data =300;
        f3(data);}
        printf("%d",data);
    
    }
