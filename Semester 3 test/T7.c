#include <stdio.h>

int main() {
    int n, m;

    // Read the size of the first array
    scanf("%d", &n);
    int array1[n];

    // Read elements of the first array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    // Read the size of the second array
    scanf("%d", &m);
    int array2[m];

    // Read elements of the second array
    for (int i = 0; i < m; i++) {
        scanf("%d", &array2[i]);
    }

    // Calculate the merged array
    int mergedArray[n + m];
    for (int i = 0; i < n; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < m; i++) {
        mergedArray[n + i] = array2[i];
    }

    // Display the merged array in reverse order
    for (int i = n + m - 1; i >= 0; i--) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}