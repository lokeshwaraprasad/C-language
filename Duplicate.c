// C CODE TO REMOVE THE DUPLICATE ELEMENTS FROM THE ARRAY

#include <stdio.h>

int main() {
    int arr[] = {1,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\n%d\n", size);
  
     int tem[size];
     
     int j=0;
     for(int i=0;i<size;i++)
     {
         if(arr[i]!=arr[i+1])
         {
             tem[j]=arr[i];
             j++;
             
         }
     }
     
     //tem[j++]=arr[size-1];
     
     
     for(int k=0;k<size;k++)
     {
         printf("%d ",tem[k]);
     }

}