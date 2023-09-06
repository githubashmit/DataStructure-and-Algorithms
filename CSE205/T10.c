#include <stdio.h>

int main() {
    int n = 5; // Size of the array
    int arr[n]; // Declare an array of size 5
    
    printf("Enter %d elements:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input each element
    }
    
    printf("Entered elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the entered elements
    }
    
    return 0;
}