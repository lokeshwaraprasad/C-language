#include <stdio.h>

//m is number of rows and n is column
//a for normal matrix and b for transpose matrix
int main()
{
   int m,n;
   printf("ENTER NUMBER OF ROWS:  ");
   scanf("%d",&m);
   printf("\n ENTER THE NUMBER OF COLUMNS: ");
   scanf("%d",&n);
   int A[10][10];
  for (int i =0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          printf("ENTER THE ELEMENT IN %d %d: ",i,j);
          scanf(" %d",&A[i][j]);
      }
  }
  int B[10][10];
  for (int i=0;i<m;++i)
  {
      for(int j=0;j<n;j++)
      {
          B[i][j]=A[i][j];
          
      }
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < n; ++i)
  for (int j = 0; j < m; ++j) {
    printf("%d  ", B[i][j]);
    if (j == m- 1)
    printf("\n");
  }
  
 return 0;
}