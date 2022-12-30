#include<stdio.h>


int max(int m,int index,int A[])
{

    if(index<0)
    {
        return m;
    }

    else
    {
        if(A[index]>A[m])
            m=index;
    }
         max(m,index-1, A);
         return 0;
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter element of array A: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    int Max = max(0,n-1,A);
    printf("\nMAximum = %d", A[Max]);
}
