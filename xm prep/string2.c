#include<stdio.h>
#include<string.h>
int isvowel(char ch);

int main()
{
    char line[100];
    int i,vowels=0;

    printf("Type : ");

    gets(line);

    for(i=0;line[i]!='\0';i++)
    if(isvowel(line[i])) vowels++;

    printf("%d",vowels);
    return 0;

}
int isvowel(char ch)
{
    return(ch=='a' || ch=='e' || ch=='i' || ch=='0' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
