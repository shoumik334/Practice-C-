#include<stdio.h>
#include<math.h>
void separate(double num,char *singp,int *whlp,double *frcp);

int main()
{
    double value;
    char sign;
    int whole;
    double fraction;

    printf("Ente number: ");
    scanf("%lf",&value);

    separate(value,&sign,&whole,&fraction);

    printf("Sign is: %c",sign);
    printf("\nWhole part : %d",whole);
    printf("\nFraction : %.2f",fraction);
    
}
void separate(double num,char *singp,int *whlp,double *frcp)
{
    double magnitude;

    if(num<0)
    *singp='-';
    else if(num==0)
    *singp=' ';
    else
    *singp='+';

    magnitude=fabs(num);
    *whlp=floor(magnitude);
    *frcp=magnitude- *whlp;
}