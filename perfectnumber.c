/* perfect number */
#include<stdio.h>
int main()
{
    int num;
    int i=0;
    int sum=0;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
          sum = sum + i;
    }
    if(sum==num)
   	 printf("YES");
    else
  	  printf("NO");
}