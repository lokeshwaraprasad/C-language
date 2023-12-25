
#include <stdio.h>

int main()
{
    int n;
    printf("array elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int tem=arr[low];
        arr[low]=arr[high];
        arr[high]=tem;
        low++;
        high--;
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
