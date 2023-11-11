#include<stdio.h>
#include<string.h>





int main()
{
    char str[100];
    printf("ENTER THE BINARY EQUIVALENT TO CONVERT INTO DECIMAL:\n");
    scanf("%s",&str);
      int base=1;
    int ans=0;
    int index=strlen(str)-1;
    for(int i=index;i>=0;i--)
    {
        int count=str[i]-48;
        ans=ans+(count*base);
        base=base*2;
    }
    printf("%d",ans);

}