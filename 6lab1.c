#include<stdio.h>
int main()
{
    int x;
    printf("Enter x valuea:");
    scanf("%d",&x);
    if(x>0)
    printf("%d number is positive",x);
    else if (x<0)
    printf("%d number is negative",x);
    else
    printf("The number is 0");

    return 0;
}