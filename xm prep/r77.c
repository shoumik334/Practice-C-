#include<stdio.h>
void print_n(int n)
{
    if(n==0)
    return;

    print_n(n-1);
    printf("%d\t",n);
}
int main()
{
    int n;
    printf("Entet total number : ");
    scanf("%d",&n);
    print_n(n);
}