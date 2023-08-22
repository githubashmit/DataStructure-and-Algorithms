#include <stdio.h>

void insertionSort(double arr[], int n) {
    for (int i = 1; i < n; i++) {
        double key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        // Print array state after each iteration
        printf("After Iteration %d:", i);
        for (int k = 0; k < n; k++) {
            printf(" %.2lf", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    double revenue[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &revenue[i]);
    }

    // Print initial array
    printf("Initial order:");
    for (int i = 0; i < n; i++) {
        printf(" %.2lf", revenue[i]);
    }
    printf("\n");

    // Perform insertion sort
    insertionSort(revenue, n);

    // Print sorted array
    printf("Sorted order:");
    for (int i = 0; i < n; i++) {
        printf(" %.2lf", revenue[i]);
    }
    printf("\n");

    return 0;
}