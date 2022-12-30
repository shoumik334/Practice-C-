#include<stdio.h>
int main()
{
    int number;
    printf("Scores :");
    scanf("%d",&number);
    if(number>100)
    printf("Check Again");
    else if(number>=93)
    printf("A Excellent");
    else if(number>=90)
    printf("A-");
    else if(number>=87)
    printf("B+");
    else if(number>=83)
    printf("B Good");
    else if(number>=80)
    printf("B-");
    else if(number>=77)
    printf("C+");
    else if(number>=73)
    printf("C Average");
    else if(number>=70)
    printf("C-");
    else if(number>=67)
    printf("D+");
    else if(number>=60)
    printf("D poor");
    else
    printf("Fail");
    
}