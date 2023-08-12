#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Deleting the middle element for odd-sized array
    if (n % 2 == 1) {
        int middleIndex = n / 2;

        for (int i = middleIndex; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // Reduce the size of the array
    } else {
        printf("Array has an even number of elements. No middle element to delete.\n");
    }

    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
