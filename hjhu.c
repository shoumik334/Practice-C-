#include <stdio.h>
#define SENTINEL -1  /* Marking end of input */
int main(void) {     /* Compute the sum of test scores */
int sum = 0;       /* Sum of test scores */
int score;         /* Current input score */
printf("Enter first score (%d to quit)> ", SENTINEL);
for (scanf("%d", &score);
score != SENTINEL;
scanf("%d", &score)) {
sum += score;
printf("Enter next score (%d to quit)> ", SENTINEL);
}
printf("\nSum of exam scores is %d\n", sum);
return (0);
}