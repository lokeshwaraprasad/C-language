#include <stdio.h>

int main()
{
    int num;
printf("enter a number:");
scanf("%d",&num);
int remainder;
int sum=0;
while(num>0)
{
    remainder=num%10;
    sum=sum+remainder;
    num=num/10;
}
printf("%d",sum);
    return 0;
}