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
   int largest=0;
   int res=-1;
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[largest])
       {
           res=largest;//res=0 lar=1 //res=1 lar=2//
           largest=i;
       }
       else if(arr[i]!=arr[largest])
       {
           if(res==-1||arr[i]>arr[res])
           {
               res=i;
           }
       }
   }
   printf("the seconfd largest elementb is found at index%d",res);
}
