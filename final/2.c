#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<ctype.h>

int isvowel(char ch);

int main()
{
    system("clear");
    char line[100];

    int vowels=0;

    printf("Enter your line: ");
    gets(line);

    for(int i=0;line[i]!='\0';i++)
    if(isvowel(line[i]))
    vowels++;

    printf("\nNumber of vowels: %d",vowels);

}
int isvowel(char ch)
{
    return(ch=='a' || ch=='A' ||
           ch=='e' || ch=='E' ||
           ch=='i' || ch=='I' ||
           ch=='o' || ch=='O' ||
           ch=='u' || ch=='U');
}