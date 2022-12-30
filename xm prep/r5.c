#include<stdio.h>
int feb(int n)
{
    if(n==0)
    return 0;

    else if(n==1)
    return 1;

    else
    return (feb(n-1)+feb(n-2));
}
int main()
{
    int term;
    printf("Enter number of term: ");
    scanf("%d",&term);

    for(int i=0;i<term;i++)
    {
        printf("%d",feb(i));
    }
    return 0;
}