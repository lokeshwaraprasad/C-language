#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    gets(s);
    int k;
    scanf("%d",&k);
    int p=k-1;
    int flag=0;
    

    for(int i=0;i<k;i++)
    {
        if((s[i]=='a') ||(s[i]=='e') ||(s[i]=='i') ||(s[i]=='o' )||(s[i]=='u'))
        {
            flag++;
            continue;
        }
        printf("%c",s[i]);
       
    }
    if(flag==k){
        printf("-1");
    }

}