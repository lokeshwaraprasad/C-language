//to find the majjority element;
#include<stdio.h>

 int majorityElement(int a[], int size)
    {
        
        // your code here
            int candidate;
    int count = 0;
    
    for(int i = 0; i<size; i++){
        
        if(count == 0){
            candidate = a[i];
            count = 1;  // Reset count when updating candidate
        }
        else if(candidate == a[i]){
            count++;
        }
        else{
            count--;
        }
        
    }
    int check = 0;
    for(int i = 0; i<size; i++){
        if(a[i] == candidate){
            check++;
        }
    }
    if(check > size/2){
        return candidate;
    }
    else{
        return -1;
    }
}
        
int main()
{
    int n;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    printf("enter the array elements in the sorted order:");
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int res=majorityElement(arr,n);
    printf("\nthe element that occured majority times is %d",res);
}
