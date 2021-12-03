#include<stdio.h>
void array() 
{
    char ch[]=" i am an Artist";
    char c='A';
    int i=0;
    printf("Write you Name \n\n");
    while(c)
    {
        printf("%c\a",ch[i]);
        i++;
        if(i==16)
        {
            printf(" ");
            i=0;
        }
    }

}
int main(){
    array();
}
