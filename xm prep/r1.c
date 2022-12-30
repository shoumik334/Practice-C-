#include<stdio.h>
float computeSquare(float x)
{
    return x*x;

}
void printCube(float x)
{
    printf("Cube = %f",x*x*x);
}
void main()
{
    float m,n;
    printf("Enter number : ");
    scanf("%f",&m);
    n=computeSquare(m);
    printf("Square =%f",n);
    printCube(m);
}