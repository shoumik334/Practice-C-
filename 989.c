#include <stdio.h>
#define  SIZE 50    /* maximum array size */
int  read_file(const char filename[], double list[]);
void print_array(const double list[], int n);
int main(void) {
double array[SIZE];
int count = read_file("scores.txt", array);
printf("Count of array elements = %d\n", count);
print_array(array, count);
return 0;     
}
int read_file(const char filename[], double list[]) {
int count = 0;
FILE *infile = fopen(filename, "r");
if (infile == NULL) {  /* failed to open file */
printf("Cannot open file %s\n", filename);
return 0;                  /* exit function */
} 
int status = fscanf(infile, "%lf", &list[count]);  
while(status == 1) {      /* successful read */
count++;                   /* count element */
if(count == SIZE) 
break;     /* exit while */
status = fscanf(infile, "%lf", &list[count]);  
}
fclose(infile);
return count;      /* number of elements read */
}        