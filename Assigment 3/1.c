#include <stdio.h>


int odd_sums(int array[],int SIZE);
int main() 
{   
    int SIZE;
    
    printf("Enter size of array: ");
    scanf("%d",&SIZE);

    int array[SIZE];
    printf("\nEnter array elements: ");

    for(int i=0;i<SIZE;i++)
    {
        scanf("%d",&array[i]);
    }


    //int array[]={30,12,51,17,45,62};
     printf("Odd sum : %d\n",odd_sums(array,SIZE));
    
    return 0;
}
int odd_sums(int array[],int SIZE)
{
    int i=0,sum=0;
    
    for(i=0;i<SIZE;i++)
    {
        if(array[i]%2!=0)
        sum+=array[i];
    }
    return sum;
}