#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[]="My id id: 2232042642";
    int i;

    for(i=0;s[i]!='\0';i++)
    s[i]=toupper(s[i]);

    puts(s);

    printf("The digits are: ");

    for (i = 0;s[i]!='\0';i++)
    {
        if(isdigit(s[i]))
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
    
    
    
}