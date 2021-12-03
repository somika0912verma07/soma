#include<stdio.h>
void star();

int main(){
    star();
    return 0;}
    void star(){
    
int i,j,space;
for(i=1; i<=5;i++){
for(space=5;space>i;space--){
printf("  ");
for(j=1;j<=2*i-1;j++)

    printf("*");
   printf("\n");
    }
    }

return 0;
}