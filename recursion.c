//print from n to 1;
#include<stdio.h>
void dec(int n)
{
    if(n==0)
    {
    return;
    }
    printf("\n%d",n);
    n=n-1;
    dec(n);
}
int main()
{
    printf("enter an number:");
    int n;
    scanf("%d",&n);
    dec(n);
}