#include<stdio.h>
int sum(int m,int n)
{
    int sum=0;
    for (int i = m; i < n; i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int x,y;

    printf("Enter 2 integers: ");
    scanf("%d%d",&x,&y);

    int s=sum(x,y);
    printf("SUM= %d",s);
}