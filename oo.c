#include <stdio.h>
int main(void)
{
    int a[100],num,search,i;

    printf("Enter how many number you want to save :");
    scanf("%d",&num);

    printf("\n");

    printf("Enter the numbers you want to print :\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n");
    
    printf("Enter the number that you want to search :");
    scanf("%d",&search);

    for(int i=0;i<num;i++)
    {
        if(search==a[i])
        {
            printf("\nThe %d nummber position is %d", search,i);
        }
        
    
    }
    if(search!=a[i])
    for(int i=0;i<num;i++)
    {
        if(search!=a[i])
        printf("\nNot found");
    }

    return 0;
}