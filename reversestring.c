#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("ENTER THE STRING: ");
    scanf("\n%s",&string);
    char reversestring[100];
    int i=0;
    int l=strlen(string)-1;
    while(string[i]!='\0')
    {
        reversestring[i]=string[l];
        l--;
        i++;
        }
        reversestring[i]='\0';
        printf("%s",reversestring);
        return 0;
}