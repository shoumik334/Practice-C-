#include<stdio.h>
int main()
{
    int array[] = {8, 53, 32, 54, 74, 3, 7, 18, 28, 37, 42, 42};

    int count=0,comparision=0;

    for(int i=0;i<12;i++)
    {
        int min=i;

        for(int j=i;j<12;j++)
        if(array[j]<array[min])
        {
            min=j;
            comparision++;

        }
        int temp=array[i];
        array[i]=array[min];
        array[min]=temp;
        count++;

        for(int i=0;i<12;i++)
         printf("%2i  ", array[i]);
         printf("\n");

        
        
    }
    printf("The number of exchanges is: %d\n", count); 
    printf("The number of comparisons is: %d\n", comparision);

}