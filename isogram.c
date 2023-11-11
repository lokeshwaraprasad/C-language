#include<stdio.h>
#include<string.h>
int isIsogram(char string[])
{
    int size=strlen(string);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(string[i]==string[j])
            {
                return 0;
            }
        }
    }
    return 1;
  
}
int main()
{
    char string[100];
    printf("\n ...................ISPGRAM MENAS STRING WITHOUT REPEATED CHARACTERS....................");
    printf("\n ENTER AN STRING TO CHECK EHETHER ISOGRAM OR NOT:");
    scanf("%s",&string);
    int result=isIsogram(string);

    if(result!=0)
    {
       printf("IT IS AN ISOGRAM");
    }

    else
    {
        printf("NOT AN ISOGRAM");
    }
    

}