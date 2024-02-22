#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int size, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements of the array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array to -1
    }

    // Count frequency of each element
    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark duplicate elements
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print frequency of each element
    printf("Frequency of each element:\n");
    for (i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
