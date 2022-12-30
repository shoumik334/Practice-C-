#include<stdio.h>
#include<math.h>
#define PI 3.1416
void areaPeri(float r,float *a,float *p);
int main()
{
    float radious,area,perimetre;

    printf("Enter Radious: ");
    scanf("%f",&radious);
    areaPeri(radious,&area,&perimetre);

    printf("Area of circle: %.2f",area);
    printf("Perimetre of circle: %.2f",perimetre);

    return 0;
}
void areaPeri(float r,float *a,float *p)
{
    *a=PI*r*r;
    *p=PI*2*r;
}
