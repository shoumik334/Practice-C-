#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter Number Numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    printf("Number 1 is larger");
    if(num1==num2)
    printf("Both number is equal");
    else
    printf("Number 2 is larger");
}