#include <stdio.h>
int main()
 {
  int A[] = {8, 53, 32, 54, 74, 3, 7, 18, 28, 37, 42, 42};
  int count = 0, comparisons = 0;
  for(int i = 0; i < 11; i++)    //For each element.
   {
    int min = i;            //Assumes the first element in the remaining array as min.
    for(int j = i; j < 12; j++)    //Find the position of least element in remaining array.
     if(A[j] < A[min])
      {
       min = j;
       comparisons++;
      } 
    int temp = A[i];        //Exchange the first element in the array, with minimum element.
    A[i]     = A[min];
    A[min]   = temp; 
    count++;
    for(int i = 0; i < 12; i++)
     printf("%2i ", A[i]);
    printf("\n");   
   }
  printf("The number of exchanges is: %i\n", count); 
  printf("The number of comparisons is: %i\n", comparisons);
 }

