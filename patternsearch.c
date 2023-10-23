#include<stdio.h>
#include<string.h>


int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    char pattern[] = "fox";

    // search for the pattern
    char *result = strstr(str, pattern);

    if (result != NULL) {
        printf("Pattern found at index %ld\n", result - str);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}
//another method//
/*void search(char*p,char*s)
{
    int m=strlen(p);
    int n=strlen(s);
    for(int i=0;i<=n-m;i++)
    {
        int j;
        int a=i;
        for(j=0;j<m;j++)
        {
            if(s[a]!=p[j])
                break;
                a++;
        }
        if(j==m)
        printf("pattern at index%d",i);
    }
}*/