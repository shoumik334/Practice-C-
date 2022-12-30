#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100
void change_case(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))
        s[i]=tolower(s[i]);
        else if (islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
    }
}
int main()
{ 
    char str[SIZE];
    printf("Enter a string of length<%d : ",SIZE);
    gets(str);

    change_case(str);
    puts(str);


}