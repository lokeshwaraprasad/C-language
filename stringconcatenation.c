///with strcat function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    int i=0;
    int j=0;
    printf("enter the first string:");
    scanf("%s",&str1);
     printf("enter the second string:");
    scanf("%s",&str2);
    while(str1[i] !='\0')
    {
        str3[j] = str1[i];
        i++;
        j++;

    }
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
   
   
    printf("\nConcatenated string: %s", str3);
   
    return 0;
    
}