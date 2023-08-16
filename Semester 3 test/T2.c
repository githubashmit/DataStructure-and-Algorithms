/* The data analytics company you work for has received a dataset containing integer values. They want to analyze the data and determine the second smallest value present in the dataset. You have been assigned the task of developing a program to efficiently find and display the second smallest element in the given array.

Note: This kind of question will be helpful in clearing Capgemini

recruitment.

Input format:

The first line of input prompts the user to specify the size of the array. The second line of input prompts the user to provide the elements of the array, separated by spaces.

Output format:
The program will display the second smallest element present in the

array.

Refer to the sample input and output formating specifications.

Code constraints:

The array size will be between 2 and 100 (inclusive). The array will contain unique integer values.

Sample test cases:

Input 1:

5

Output 1:

4 2 7 1 3

Second Smallest Element: 2 */
#include <stdio.h>

int findSecondSmallest(int array[], int size) {
    int smallest = (array[0] < array[1]) ? array[0] : array[1];
    int second_smallest = (array[0] < array[1]) ? array[1] : array[0];

    for (int i = 2; i < size; i++) {
        if (array[i] < smallest) {
            second_smallest = smallest;
            smallest = array[i];
        } else if (array[i] < second_smallest && array[i] != smallest) {
            second_smallest = array[i];
        }
    }

    return second_smallest;
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

    // Find the second smallest element
    int second_smallest = findSecondSmallest(array, size);

    // Output
    printf("Second Smallest Element: %d\n", second_smallest);

    return 0;
}