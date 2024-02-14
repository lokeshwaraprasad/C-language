#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while (1)
    {
        // Find leftmost element greater than or equal to pivot
        do
        {
            i++;
        } while (arr[i] < pivot);

        // Find rightmost element smaller than or equal to pivot
        do
        {
            j--;
        } while (arr[j] > pivot);

        // If two pointers met
        if (i >= j)
            return j;

        // swap(arr[i], arr[j])
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // pi is partitioning index, arr[p] is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf(" %d", arr[i]);

    printf("\n");
}

int main()
{
    int arr[] = {10, 17, 18, 9, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    printArray(arr, n);
    return 0;
}