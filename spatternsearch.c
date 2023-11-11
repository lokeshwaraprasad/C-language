#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    char search[100];
int res;
printf("ENTER THE STRING:   ");
scanf("%s",&string);
printf("ENTER THE STRING TO SEARCH");
scanf("%s",&search);
char *result=strstr(string,search);
res= result-string;
if(result!=NULL)
{
    printf("it is found at index %ld",res);
}
else{
    printf("NOT FOUND");
}

}