#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in the arfray:");
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
    int key;
    printf("enter the number to be serached:");
    scanf("%d",&key);
    int flag=0;
   
    printf("the sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int first=0;
    int last=n-1;
    int mid;
    int ai=0;
    while(first<last)
    {
         mid=(first+last)/2;
         for(int i=0;i<n;i++)
         {
            if(a[mid]==key)
            {
                flag=1;
                i=mid;
                break;
            }
            else if(a[mid]<key)
            {
                first=mid+1;
            }
            else{
                  last=mid-1;
            }
         }

    }
    if(flag)
   {
       printf("the elemnt  is found in the array and the index is %d",ai);
   }
   else
   {
       printf("the element is not found in the aray");
   }
}