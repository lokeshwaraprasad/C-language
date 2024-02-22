
#include <stdio.h>

int main()
{
    int start,end;
    int flag=0;
    printf("enter the starrting number:");
    scanf("%d",&start);
    printf("enter the ending number:");
    scanf("%d",&end);
    for(int i=start;i<=end;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag==0)
        printf(" %d  ",i);
        
        flag=0;
    }
}
