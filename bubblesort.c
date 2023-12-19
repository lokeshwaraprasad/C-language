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
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    printf("the sorted list is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}