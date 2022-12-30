#include<stdio.h>
int fibonacci(int i)
{
    if(i==0){
    return 0;
    }
    if(i==1)
    {
        return 1;

    }
    return fibonacci(i-1)+fibonacci(i-2);
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
}