#include<stdio.h>
int main()
{
    int num1,num2;
    num1=5;
    num2=10;


    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("num1=%d\n",num1);
    printf("num2=%d\n",num2);

}