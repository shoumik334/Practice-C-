#include<stdio.h>
void order(double *smp,double *lgp);
int main()
{
    double num1,num2,num3;

    printf("Enter 3 numbers: ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);
    printf("Order= %.2f\t %.2f \t %.2f",num1,num2,num3);
    return 0;
}
void order(double *smp,double *lgp)
{
    double temp;

    if(*smp>*lgp)
    {
        temp=*smp;
        *smp=*lgp;
        *lgp=temp;
    }
}