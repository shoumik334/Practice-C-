#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the number:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 && num2==num3)
    printf("All number equal");
    else if(num1>num2 && num1>num3)
    printf("Number 1 is larger");
    else if(num2>num1 && num2>num3)
    printf("Number 2 is Larger");
    else 
    printf("Number 3 is Larger");
}