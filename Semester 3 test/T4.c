/* Write a program to insert an element at a specific position in an array, The program should prompt the user to enter the position and the value to be inserted and then display the updated array.

Input format:

The first line of input consists of an integer, which represents the size of the array. The second line of input consists of the elements of the array, separated by

space.

The third line of input consists of an integer, which represents the position

where they want to insert a new element.

The last line of input consists of an integer, which represents the value to bo

inserted at the specified position.

Output format:

The output displays the original array before insertion and the updated array after insertion.
Refer to the sample output for formatting specifications.

Code constraints:

Maximum size of the array (MAX_SIZE= 100). The size of the array should be a positive integer.

The position where the user wants to insert the element should be a valid position within the array bounds (between 1 and size + 1, inclusive). The elements of the array can be both positive and negative integers.

Sample test cases:

Input 1:

Output 1:

5

12345

3

Original array: 12345 Updated array: 1 2 10 3 4 5

10 */

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
    for (int i = 0; i < size ; i++) {
        printf(" %d", array[i]);
    }
    // Insert the value at the specified position
    insertElement(array, &size, position, value);
    printf("\n");

    printf("Updated array:");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}