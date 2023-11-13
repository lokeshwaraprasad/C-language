#include<stdio.h>

   

int main()
{
    printf("MATRIX MULTIPLICATION");
    int m,n;
    printf("\nenter the number of rows and colums for the two matrices:");
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    int matrix1[m][n];
    int result[m][n];
    //for the first matrix
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("enter the element of a %d%d: ",i,j);
            scanf("%d",&matrix[i][j]);
            
        }
    }
    // for the second matrix
    printf("ENTER TNE ELEMENTS FOR THE SECOND MATRIX");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("enter the element of b %d%d: ",i,j);
            scanf("%d",&matrix1[i][j]);
            
        }
    }
    
    
    //for multiplication
     int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            result[i][j]=0;
            for(k=0;k<n;k++)
            {
                result[i][j]=result[i][j]+(matrix[i][k]*matrix1[k][j]);
            }
        }
    }
//for to print result 
 printf("the multiplied matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",result[i][j]);
              if (j == m- 1)
              printf("\n");
        
        }
    }
}