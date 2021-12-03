#include<stdio.h>
int main(){
    int arr[10];
    int i,n;
    int position;
    printf("\n enter number of element in array");
    scanf("%d",&n);
    printf("\n enter %d element \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        printf("element of the array \n");
        for(i=0;i<n; i++){
            printf("%d",arr[i]);
        }
            printf("\n \n enter the position you want to delet the element");
            scanf("%d",&position);
            if(position>=n+1)
            {
                printf("\n deletion invalid position \n");
            }
            else
            {
                for(i=position-1;i<n-1; i++)
                {
                    arr[i]=arr[i+1];
                }
            }
            printf("\n\n array after deletion of the element \n");
            for(i=0;i<n; i++){
            printf("%d",arr[i]);
            }
            return 0;
        
    
}
