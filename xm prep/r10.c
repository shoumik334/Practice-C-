#include<stdio.h>
#include<math.h>
int ret(int a,int b)
{
    if(a==0)
    return 0;
    if(b==0)
    return 1;

    return (pow(a,b));
    
}
int main()
{
    int a,b,ans=0;
    printf("Enter a,b: ");
    scanf("%d%d",&a,&b);

    printf("Ans= %d",ret(a,b));
}