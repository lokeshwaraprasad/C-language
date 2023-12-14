#include<stdio.h>
void towerofhanoi(int n,char source,char aux,char destination)
{
    if(n==1)
    {
        printf("move the disk 1 from %c to %c\n",source,destination);
        return;
    }
    towerofhanoi(n-1,source,aux,destination);
    printf("Move the disk %d from %c to %c\n",n,source,destination);
    towerofhanoi(n-1,aux,destination,source);
}
int main()
{
    int n;
    printf("enter the  number of disks:");
    scanf("%d",&n);
    towerofhanoi(n,'A','B','C');
}