#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[]="Hello! Gys, I'm Shoumik.I'm from Bangladesh. Around 160 million people live in Bangladesh";

    int i,j,k,count_l=0,count_d=0,count_s=0,count_p=0;

    for(i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
        count_l++;

        if(isdigit(s[i]))
        count_d++;

        if(isspace(s[i]))
        count_s++;

        if(ispunct(s[i]))
        count_p++;

    }
    printf("\n%d",count_l);
    printf("\n%d",count_d);
    printf("\n%d",count_s);
    printf("\n%d",count_p);

}