//reverse of number using while loop
#include<stdio.h>
int main()
{
    int n;
    int rev=0;
    int remainder;

    printf("enter an number to find the reverse:");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n=n/10;
    }
    printf("reverse of number is:%d",rev);

}