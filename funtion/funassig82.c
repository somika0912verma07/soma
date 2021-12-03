#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int n,i;
    int found;
    printf("enter the number you want to search /n");
    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        if(n==&arr[i]);
        {
            found=1;
            break;
        }
    }
    if(found==1){

    
        printf("number in found in array/n");

    }
    else
    {
    printf("number is not found /n"); 

    }
    return 0;

}