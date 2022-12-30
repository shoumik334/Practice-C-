#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char str[100];
    int count_l=0,count_sp=0,count_d=0;
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        str[i]=toupper(str[i]);

    }
    puts(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
            count_l++;
        }
        if(isspace(str[i]))
        {
            count_sp++;
        }
        if(isdigit(str[i]))
        {
            count_d++;
        }


    }

    printf("\nDigit=%d",count_d);
    printf("\nLetter=%d",count_l);
    printf("\nSpace=%d",count_sp);

}