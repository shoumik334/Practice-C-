#include<stdio.h>
int main()
{
    int c;
    int *pc;

    c=11;
    printf("Adress of c: %d",&c);
    printf("\nValue of c: %d",c);

    pc=&c;

    printf("\nAdress of pointer pc:%d",pc);
    printf("\nContent of pointer pc: %d",*pc);

    c=2;

    printf("\nAdress of pointer pc:%d",pc);
    printf("\nContent of pointer pc: %d",*pc);

    *pc=4;
    printf("\nAdress of pointer pc:%d",pc);
    printf("\nContent of pointer pc: %d",*pc);

    printf("\nAdress of c:%d",&c);
    printf("\nValue of c: %d",c);
}