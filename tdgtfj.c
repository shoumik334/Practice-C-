#include<stdio.h>
int main(void) /* Compute Sum of numbers */
{
int i = 0; /* count number */
int a; /* current input number */
int sum = 0; /* Sum of inputs */
while(i < 10)
{
printf("Enter a number: ");
scanf("%d", &a);
sum = sum + a;
i++;
}
printf("Total is %d\n", sum);
return 0;
}