#include<stdio.h>
void oddEven(int x)
{
    if(x<0)
    printf("Negative");
    else if(x>0)
    printf("Positive");
    else
    printf("Number is 0");
    
}
void main()
{
    int m;
    printf("Enter an intiger: ");
    scanf("%d",&m);
    oddEven(m);
}