/* Given an array of integers, write a program to rotate the array to the right by a specified number of positions. The program should prompt the user to enter the number of positions to rotate and then display the updated array.

Input format:

The first line of input contains an integer representing the size of the array. The second line of input contains the elements of the array, separated by a

space.

The last line of input contains an integer to enter the number of positions to

rotate the array.

Output format:

The output displays the original array before rotation and the updated array after rotation.

Refer to the sample output for formatting specifications.
Code constraints:

Maximum size of the array (MAX_SIZE=100). The size of the array should be a positive integer.

The elements of the array can be any integer.

The number of positions to rotate the array can be positive

Sample test cases:

Input 1:

6

Output 1:

Original array: 1 2 3 4 5 6

Updated array: 561234

123456

4

Input 2:

Output 2:

7

12 65 34 80 38 51 72 10

Original array: 12 65 34 88 38 51 Updated array: 38 51 72 12 65 34 */
#include <stdio.h>

void rotateArray(int array[], int size, int positions) {
    int temp[size];

    // Copy the array to a temporary array
    for (int i = 0; i < size; i++) {
        temp[i] = array[i];
    }

    // Rotate the array elements
    for (int i = 0; i < size; i++) {
        array[(i + positions) % size] = temp[i];
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int positions;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);

    // Rotate the array
    rotateArray(array, size, positions);

    // Output
    printf("Original array:");
    for (int i = 0; i < size; i++) {
        printf(" %d", array[i]);
    }
    printf("\n");

    return 0;
}