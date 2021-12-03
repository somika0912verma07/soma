/*inverted pyramid using function
* * * * * * * * * * * 
 * * * * * * * * * * 
  * * * * * * * * * 
   * * * * * * * * 
    * * * * * * * 
     * * * * * * 
      * * * * * 
       * * * * 
        * * * 
         * * 
          * 

*/
#include<stdio.h>
void inverted_pyramid();
void inverted_pyramid(){
   int i,j,space;
 for(i=1; i<=11; i++){
     for(space=1; space<i; space++)
       printf(" ");
	for(j=11; j>=i; j--){
	printf("* ");
        }
  
    printf("\n");
}

}  

int main(){

 inverted_pyramid();
return 0;
}