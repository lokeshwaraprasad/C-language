#include<stdio.h>

int partition(int a[], int start, int high)
{
    // Creating temporary
    int temp[(high - start) + 1];

    // Choosing a pivot
    int pivot = a[high];
    int index = 0;

    // smaller number
    for (int i = start; i <= high; ++i) {
        if (a[i] < pivot)
        {
            temp[index++] = a[i];
        }
    }

    // pivot position
    int position = index;

    // Placing the pivot to its original position
    temp[index++] = pivot;

    for (int i = start; i <= high; ++i)
    {
        if (a[i] > pivot)
        {
            temp[index++] = a[i];
        }
    }

    // Change the original array
    for (int i = start; i <= high; ++i) {
        a[i] = temp[i - start];
    }

    // return the position of the pivot
    return position;
}

void quicksort(int numbers[], int start, int end)
{
    if (start < end) {
        int point = partition(numbers, start, end);

        quicksort(numbers, start, point - 1);
        quicksort(numbers, point + 1, end);
    }
}

// Function to print the array
void print(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
}

int main()
{
    int numbers[] = { 3, 2, 1, 78, 9798, 97 };
    int size = sizeof(numbers)/sizeof(numbers[0]);
    // rearrange using naive partition
    quicksort(numbers, 0, size - 1);

    print(numbers, size);
    return 0;
}