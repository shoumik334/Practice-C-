#include<stdio.h>

int prime(int x)
{
    for(int i=2;i<x/2;i++)
    {
        if(x%i==0)
        return 0;

        
     
    }
   return 1;

}
int main()
{
    int m;
    printf("Enter a number : ");
    scanf("%d",&m);
    int n=prime(m);
    if(n==0)
    prime("Not prime number");
  else
  {
    printf("Prime");
  }
    
}