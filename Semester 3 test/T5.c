/* You are developing a program for a data processing company. The company deals with large sets of data consisting of strings. However, due to data collection methods, there may be duplicate strings in the data sets. Your task is to develop a program that removes duplicate strings from an array of strings.

Write a program that takes user input for the size of the array and the strings in the array. After removing duplicate strings, the program should display the updated array.

Input format:

The first line of input consists of an integer that represents the size of the

array. The next 'size' lines consist of the strings in the array, each on a new line.

Output format:

The program outputs a single line displaying the updated array of strings

after removing duplicates.
Code constraints:

The size of the array should be a positive integer. Each string in the array should not exceed 100 characters. String comparison is case-sensitive.

Sample test cases:

Input 1:

5

Output 1:

apple

banana

orange

Updated array: apple banana orang


grape
 */
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int isDuplicate(char array[][MAX_SIZE], int size, char str[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i], str) == 0) {
            return 1; // Duplicate found
        }
    }
    return 0; // No duplicate found
}

void removeDuplicates(char array[][MAX_SIZE], int *size) {
    for (int i = 0; i < *size; i++) {
        for (int j = i + 1; j < *size; j++) {
            if (strcmp(array[i], array[j]) == 0) {
                for (int k = j; k < *size - 1; k++) {
                    strcpy(array[k], array[k + 1]);
                }
                (*size)--;
                j--;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char array[MAX_SIZE][MAX_SIZE];
    printf("Enter the strings in the array, each on a new line:\n");
    for (int i = 0; i < size; i++) {
        scanf("%s", array[i]);
    }

    // Remove duplicates from the array
    removeDuplicates(array, &size);

    // Output
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", array[i]);
    }

    return 0;
}