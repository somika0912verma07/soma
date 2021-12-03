#include<stdio.h>
void switch4(){
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    switch(marks/10){
        case 10:
        case 9:
        printf("pass with 'A' grade\n");
        break;
        case 8:
        case7:
        printf("pass with 'B' grade\n");
        break;
        case 6:
        case 5:
        printf("pass with 'C' grade\n");
        break;
        case 4:
        printf("pass with 'D' grade\n");
        break;
        default:
        printf("u are fail \n");
    }
    }

int main(){
    switch4();
    return 0;
}