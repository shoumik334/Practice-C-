#include<stdio.h>
#include<string.h>
int main(void) 
{
char sentence[100], word[40], *result;
printf("Enter a sentence: ");
gets(sentence);
printf("Enter a word to search: ");
gets(word);    
result = strstr(sentence, word);
if(result != NULL) printf("%s was found\n", word);
else printf("%s was not found\n", word);
return 0;
}