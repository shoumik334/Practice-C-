#include<stdio.h>
int main()
{
    int size,oddc=0,evenc=0;

    printf("Enter array size: ");
    scanf("%d",&size);

    int array[size];

    printf("\nEnter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("\nOdd numbers: ");
    for (int i = 0; i < size; i++)
    {
        if(array[i]%2!=0)
        
        {
            printf("%d ",array[i]);
            oddc++;

        }
        
    }
    printf("\nEven numbers: ");
    for (int i = 0; i < size; i++)
    {
        if(array[i]%2==0)
        {
        printf("%d ",array[i]);
        evenc++;
        }
    }
    printf("\nNumber of odds: %d",oddc);
    printf("\nNumbers of even: %d",evenc);
}