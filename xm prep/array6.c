#include<stdio.h>
int main()
{
    int i,j;
    int num_row,num_col;
    printf("Enter number of Row and colums: ");
    scanf("%d%d",&num_row,&num_col);


    int A[num_row][num_col],B[num_row][num_col],C[num_row][num_col];

printf("Enter elements of A matrix: \n");
    for(i=0;i<num_row;i++)
    {
        for(j=0;j<num_col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    
    }
    for(i=0;i<num_row;i++)
    {
        for(j=0;j<num_col;j++)
        {
            
            printf(" %d",A[i][j]);
        }
        printf("\n");
    }

printf("\n\nEnter elements of B matrix: ");
 
    for(i=0;i<num_row;i++)
    {
        for(j=0;j<num_col;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    
    }
    for(i=0;i<num_row;i++)
    {
        for(j=0;j<num_col;j++)
        {
            
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }
   
    for(i=0;i<num_row;i++)
    {
        for(j=0;j<num_col;j++)
        {
            
            C[i][j]=A[i][j]+B[i][j];
            
        }
        
    }
    printf("\nC=A+B : ");
 
    for(i=0;i<num_row;i++)
    {
        for(j=0;j<num_col;j++)
        {
            printf(" %d",C[i][j]); 
         }
          printf("\n");
        printf("\t");
    }
}
   