#include<stdio.h>
int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d",&size);

    double array[size],max;

    printf("\nEnter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%lf",&array[i]);
    }
    max=array[0];
    for (int i = 0; i < size; i++)
    {
        if(array[i]>max);
        max=array[i];
    }

    printf("Largest value: %.2f",max);

}