//last occurence using binary search;
#include<stdio.h>
int last(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the right
        // half.
        else {
            res = mid;
            low = mid + 1;
            
        }
    }
    return res;
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

int x;
    printf("enter the element to be found:");
    scanf("%d",&x);
    printf("Last Occurrence = %d\n", last(arr, x, n));
 
    return 0;
}
