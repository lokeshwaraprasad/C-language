#include<stdio.h>
int main()
{
    int row,col,i,j;
    int count=0;
    
    printf("enter the number of rows and columns:");
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]<0)
            {
                count=count+1;
            }
        }
    }
    printf("%d",count);
}