#include <stdio.h>
int main()
{
int n;
printf("enter the number of inputs");
scanf("%d",&n);
int numbers[n];
int ans=0;
for(int i=0;i<n;i++)
{
    scanf("%d",&numbers[i]);
}
//for summation
for(int i=0;i<n;i++)
{
    ans=ans+numbers[i];
    
}
printf("%d",ans);
    // Write C code here
}