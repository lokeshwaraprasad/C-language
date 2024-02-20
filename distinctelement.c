// program to store distinct elemnts in an new array
#include<stdio.h>
int main()
{
    int n;
    printf("number of elements");
    scanf("%d",&n);
    int arr[10];
    int brr[10];
    
    
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
int flag=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        brr[i]=arr[i];
    }
    flag=0;
}

for(int i=0;i<10;i++)
{
    if(brr[i]!=0)
printf("%d ",brr[i]);
}



    
}