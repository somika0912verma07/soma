/*
hollow square star pattern using function
*****
*   *
*   *
*   *
*****

*/
#include<stdio.h>
void square();
void square(){
   int i,j;

for(i=1; i<=5; i++){
  for(j=1; j<=5; j++){
   if(i==1|| j==1|| i==5|| j==5)
   printf("*");
   else
   printf(" ");  
 }
  printf("\n");
}

}
int main(){

 square();
return 0;
}