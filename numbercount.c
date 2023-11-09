//a program to identify the count of number of odd numbers in the given array of inputs

#include <stdio.h>


int main()
{
    
  int n;
  printf("enter the number of inputs:\n");
  scanf("%d",&n);
  if(n<3||n>50)
  return 0;
  
    int numbers[n];
    int a=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(numbers[i]%2==1)
        {
            a=a+1;
        }
    }
    printf("%d",a);
    
}

