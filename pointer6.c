#include<stdio.h>
int main()
{
    int i,size;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int array[size];

    for ( i = 0; i < size; i++)
    {
        printf("\narray[%d]= ",i);
        scanf("%d",&array[i]);
    }

    int num;

    printf("Enter number you wanna find: ");
    scanf("%d",&num);
    
    int *ptr=&num;
    for ( i = 0; i < size; i++)
    {
    if(num==array[i])
    {
        printf("Found at index : %d and Adress=%d\n",i,ptr);
    }
    }
    return 0;
}
