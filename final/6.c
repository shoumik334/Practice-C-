#include<stdio.h> 
 struct fraction {     int num;     int denom; }frac;
 
  struct fraction get_fraction()
 {  printf("Enter num and denom: "); 
    scanf("%d", &frac.num);   
   scanf("%d", &frac.denom);     
    return frac; } 


void print_fraction(struct fraction frac)
 {    
 printf("%d/%d", frac.num, frac.denom);
 } 

int gcd(int a, int b) 
{   if (b == 0) 
    return a;    
    return gcd(b, a % b);  
} 

struct fraction reduce_fraction()
 {   
    int hcf = gcd(frac.num, frac.denom); 
   	frac.num = frac.num/hcf;     
	frac.denom = frac.denom/hcf;     
	return frac; 
} 

int main() 
{    
    frac = get_fraction(); 
    print_fraction(frac);     
    printf(" = ");  
    print_fraction(reduce_fraction());
} 