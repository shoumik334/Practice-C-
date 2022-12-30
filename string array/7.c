#include<stdio.h>
#include<string.h>

int main()
{
    char t[16],s[16]="Example string";

    strcpy(t,"Test string");

    strcpy(t,s);

    printf("%s",t);
    printf("\n%s",s);

}