// to determine the berth of your seat number indian railway
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE SEAT NUMBER:");
    scanf("%d",&n);
    if(n%8==1||n%8==4)
    {
        printf("lower berth");
    }
    else if(n%8==0)
    {
        printf("side upper");
    }
    else if(n%8==3 ||n%8==6||n%8==14)
    {
        printf("upper berth");
    }
    else if(n%8==2 ||n%8==5)
    {
        printf("middle berth");
    }
    else if(n%8==7||n%8==15)
    {
        printf("side lower");
    }
    
    
    
}
