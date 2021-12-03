#include<stdio.h>
int main(){
int ar[10];
int i,n;
int positions;
printf("\n enter number of elements in array ");
scanf("%d",&n);
printf("\n enter %d element \n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&ar[i]);
    printf("element of the array/n");
    for(i=0;i<n;i++){
        printf("%d",ar[i]);
        printf("\n\n enter the postion you want to delete the element");
        scanf("%d",&positions);
        if(positions>=n+1)
        {
            printf("\n deletion error it is invalid position \n");
        }
        else{
            for(i=positions-1;i<n-1;i++){
                ar[i]=ar[i+1];
            }

        }
        printf("\n\n array after deletion of the element \ n");
        for(i=0;i<n-1;i++){
            printf("%d",ar[i]);
        }
        return 0;
        }


    }
}

