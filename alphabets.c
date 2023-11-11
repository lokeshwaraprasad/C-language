//to print all alphabets in c//
#include <stdio.h>

int main()
{
 char c;
 char k;
 char small[100];
 char big[100];
 int i=0;
 int j=0;
 for(c='a';c<='z';c++)
 {
     small[i]=c;
     i++;
 }
 for(k='A';k<='Z';k++)
 {
     big[j]=k;
     j++;
 }
 
 printf("%s\n",small);
 printf("%s\n",big);
}