#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int numbers[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    // to print array in reverse
    for(int i=n-1;i>-1;i--)
    {
        printf("%d ",numbers[i]);
    }
}