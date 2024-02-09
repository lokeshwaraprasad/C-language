#include <stdio.h>
void insertion(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
    int key=arr[i];//k=5
    int j=i-1;//j=0
    while(j>=0 && arr[j]>key) //10>5
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;//sorting
   }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n;
    printf("enter the array elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the sorted array is");
    insertion(arr,n);
    
}