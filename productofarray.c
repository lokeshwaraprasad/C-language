
#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int sum=1;
    for(int i=0;i<n;i++)
    {
        sum=sum*arr[i];
    }
    
    printf("the product of all elemnts in the array is: %d",sum);
}
