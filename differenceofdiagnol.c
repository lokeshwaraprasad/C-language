#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int row,col;
    printf("enter the number ogf rows andcolumns in the maytrix:");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("enter the %d%d element:",i,j);
            scanf("%d",&arr[i][j]);
            printf("\n");
        }
    }
    
    
   /*  for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    int left=row-1;
    int sumright=0;
    int sumleft=0;
    printf("the sum of primary diagnol:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sumleft+=arr[i][j];
            }
        }
    }
    printf("%d",sumleft);
    
    printf("\nthe sum of left diagnol is:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            if(i+j==left)
            {
                sumright+=arr[i][j];
            }
        }
    }
    printf("%d",sumright);
    
    printf("\nthe difference of the diagnol is:%d",abs(sumleft-sumright));

    
}