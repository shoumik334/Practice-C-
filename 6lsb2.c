#include<stdio.h>
int main()
{
    char op;
    int x,y;
    printf("Enter operator:");
    scanf("%c",&op);
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    switch (op)
    {
    case '+':
    printf("%d+%d=%d",x,y,x+y);
    break;
    case '-':
    printf("%d-%d=%d",x,y,x-y);
    break;
    case '*':
    printf("%d*%d=%d",x,y,x*y);
    break;
    case '/':
    printf("%d/%d=%d",x,y,x/y);
    break;
    
    default:
    printf("Not valid operator");
        break;
    }

}