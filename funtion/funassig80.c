#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("enter elements of the array /n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("content of the array /n");
    for(i=0; i<5; i++){
        printf("%d", arr[i]);

    }
    printf("content of the array inverse order /n"); 
    for(i=4; i>=0; i--){
        printf("%d", arr[i]);

    }
    return 0;

}