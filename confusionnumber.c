
#include <stdio.h>

int main()
{
    int old;
    int num=0;
    int digit;
    printf("enter an number:");
    scanf("%d",&old);
    int s=old;
    int a=old%10;
    if(a==2||a==3||a==5||a==7)
    {
        printf("false");
        return 0;
    }
    while(old>0)
    {
        digit=old%10;
        if(digit==8)
        {
        digit=8;
        }
        else if(digit==9)
        {
        digit=6;
        }
        else if(digit==6)
        {
        digit=9;
        }
        else if(digit==1)
        {
        digit=1;
        }
        num=num*10+digit;
        old/=10;
        }
        printf("the reverse number is%d\n",num);
        if(s==num)
        {
            printf("false");
        }
        else if(s!=num)
        {
            printf("true");
        }

    return 0;
}