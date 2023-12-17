#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
             if(a[j]<a[i])
             {
                min=j;
             }
             int tem=a[i];
             a[i]=a[min];
             a[min]=tem;
        }
    }
    printf("the sorted list is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}