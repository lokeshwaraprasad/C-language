#include<stdio.h>
int getoccurence(int *arr,int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    res=res^arr[i];
    printf("%d",res);

}
int main(){
    printf("program to prints the elemnt that occured only odd times:");
    int n;
    printf("enter the number of elements inthe array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter tghe array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    getoccurence(arr,n);
}
   