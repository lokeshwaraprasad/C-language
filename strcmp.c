//tp compare the given string os whether the porefix of another dtring//
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    int s3=strlen(s2);
    printf("\n enter the  string:");
    fgets(s1,50,stdin);
    fgets(s2,50,stdin);
    if(strncmp(s1,s2,s3)!=0)
    {
        printf("YES");
    
    }
    else
    {
        printf("NO");
    }
    return 0;
}