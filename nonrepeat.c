//program to find the number of non repeated numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int count=0;
   
   int number[n];
   printf("enter the elements :");
   for(int i=0;i<n;i++)
   {
         scanf("%d",&number[i]);
   }
  for(int i = 0; i < n; i++)
    {
    	int c=0;
	    for(int j = 0; j < n; j++)
		{
			if(number[i]==number[j] && i!=j)
			{
				c++;
				break;
			}
		}
		if(c==0)
		{
			printf(" %d",number[i]);
			count++;
		}
	}
	if(count==0)
		printf("\nThere are no Non repeating elements in an array ");
}