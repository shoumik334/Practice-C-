//passing array to function using pointer 

#include<stdio.h>

void print_num(int *ptr,int len);

int main()
{
    int a[4]={1,3,4,5};
    print_num(a,4);
    return 0;
}
void print_num(int *ptr,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("*(ptr+%d)=%d\n",i,*(ptr+i),i);
    }
}