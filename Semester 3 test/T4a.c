#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int array[], int *size, int position, int value) {
    if (*size >= MAX_SIZE) {
        printf("Array size exceeded!\n");
        return;
    }

    // Shift elements to make space for the new element
    for (int i = *size; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the value at the specified position
    array[position - 1] = value;

    // Increase the size of the array
    (*size)++;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[MAX_SIZE];
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int position, value;
    printf("Enter the position where to insert: ");
    scanf("%d", &position);

    

    printf("Enter the value to be inserted: ");
    scanf("%d", &value);

    

    // Output
    printf("Original array:");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");
    // Check if the array size exceeds the maximum size before attempting insertion
    if (position < 1 || position > size + 1) {
        printf("Array size exceeded!\n");
        return 1; // Exit the program
    }
    // Insert the value at the specified position
    insertElement(array, &size, position, value);
    

    printf("Updated array:");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}