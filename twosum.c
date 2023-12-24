#include<stdio.h>
int twosum(int *arr,int target,int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==target)
        {
            printf("the target element is the sum of the element present in %d index and %d index",i,j);
            break;
        }

    }
  }
}
int main()
{
    int n;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in the array:");
    for(int i=0;i<n;i++)
    {
        printf("enter the %d of the array:",i);
        scanf("%d",&arr[i]);
    }
    int target;
    printf("enter the element to be searched as a result of the sum of the array elements");
    scanf("%d",&target);
    twosum(arr,target,n);
}