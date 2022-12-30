#include<stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;

    var=30;

    ptr=&var;

    pptr=&ptr;

    printf("value of var=%d",var);
    printf("\nvalue of ptr=%d",*ptr);
    printf("\nvalue of pptr=%d",**pptr);
}