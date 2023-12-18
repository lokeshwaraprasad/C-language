
#include <stdio.h>

int main()
{
    int n;
   printf("enter the number of elements in the array:");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int key;
   printf("enter the element to be searched:");
   scanf("%d",&key);
   int ab=0;
   int flag=0;
   for(int i=0;i<n;i++)
   {
       if(a[i]==key)
       {
            ab=i;
           flag=1;
           break;
       }
   }
   if(flag)
   {
       printf("the elemnt  is found in the array and the index is %d",ab);
   }
   else
   {
       printf("the element is not found in the aray");
   }
}
