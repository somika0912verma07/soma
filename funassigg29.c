// denomination of an amount
#include <stdio.h>
#define SIZE 6
void denomination();
void denomination()
{    
    int amount, notes;  
    int denominations[SIZE] = {500, 100, 50, 20, 10, 1};
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        notes = amount / denominations[i];

        if (notes)
        {
            printf("%d * %d = %d \n", notes, denominations[i],
                notes * denominations[i]);
        }                
    }
    }
    int main()
    {
    denomination();
    return 0;
    }


