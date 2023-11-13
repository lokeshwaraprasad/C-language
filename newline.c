   #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      char s[1000];
      printf("ENTER THE STRING:" );
    scanf("%[^\n]", s);
    for(int i=0;s[i];i++)
    {
        if(s[i]==' ')
          printf("\n");
        else {
          printf("%c",s[i]);
        }
    }
}