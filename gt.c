#include<stdio.h>
int sum(int a,int b);
int main(void)
{
    int a,b;
    printf("Enter a and b value");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
int sum(int a,int b)
{
    //int a,b;
    int sum=a+b;
    printf("sum is %d",sum);
    return 0;
}