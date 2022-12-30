#include<stdio.h>
#include<math.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    

    return (pow(n,2)+sum(n-1));
}
int main()
{
    int x;
    printf("Enter numbers:");
    scanf("%d",&x);

    printf("Sum=%d",sum(x));

}