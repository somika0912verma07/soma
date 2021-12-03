#include<stdio.h>
int main()
{
    int arr[10];
    int i,n;
    int position,value;
    printf("\n enter numbers of elements in the array ");
    scanf("%d",&n);
    printf("\n enter %d values of elements in the array \n ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter of the array /n");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);

    }
    printf("\n\n enter the postion where you want to insert newelement /n"); 
    scanf("%d", &position);
        printf("\n enter the value");
        scanf("%d", &value);
        for(i=n-1;i>=position-1;i--){
            arr[i++]=arr[i];
        } 
        arr[position]=value;
        printf("\n\n array of the insertion of the new elements \n");
        for(i=0;i<=n;i++)
{

printf("%d",arr[i]);
    }
    return 0;

}