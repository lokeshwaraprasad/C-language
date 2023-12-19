//DATA STRUCTURES RECURSION
//JOSEPHUS PROBLEM RECURSION
#include<stdio.h>
int josephus(int n,int k)
{ 
    if(n==1)
{
    return 0;
}
    return (josephus(n-1,k) +k)%n;
}
int main()
{
    int n;
    int k;
    printf("enter the number of persons in the circle:");
    scanf("%d",&n);
    printf("enter the position of peron to be killed per cycle:");
    scanf("%d",&k);
    josephus(n,k);
    printf("the person should stand at %d to stay alive till the end",josephus(n,k));
}