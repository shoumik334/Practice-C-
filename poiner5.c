#include<stdio.h>
int main()
{   
    int array[10],sum=0;
    int *ptr;

    for(int i=0;i<10;i++)
    {
        printf("\narray[%d]=",i);
        scanf("%d",&array[i]);
    }

    ptr=array;

    for(int i=0;i<10;i++)
    {
        sum=sum+ *ptr;
        ptr++;
    }
    printf("\nSum=%d",sum);



}